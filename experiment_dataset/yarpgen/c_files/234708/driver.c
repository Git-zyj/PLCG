#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4017833488U;
int var_3 = -947128718;
_Bool var_5 = (_Bool)0;
unsigned char var_11 = (unsigned char)162;
int var_13 = 698110841;
unsigned int var_15 = 3692682456U;
unsigned char var_19 = (unsigned char)68;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)44051;
unsigned int var_23 = 4119148189U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
