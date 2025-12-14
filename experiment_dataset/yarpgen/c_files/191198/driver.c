#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1185681199U;
int var_1 = 2033624457;
int var_5 = 575763395;
int var_6 = -177868289;
unsigned char var_11 = (unsigned char)99;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 985189606U;
unsigned int var_20 = 421056643U;
unsigned long long int var_21 = 17288282250424631245ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
