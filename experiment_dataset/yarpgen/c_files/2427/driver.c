#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)15283;
unsigned char var_7 = (unsigned char)126;
unsigned char var_8 = (unsigned char)138;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 23103245;
long long int var_15 = 4594951493769736615LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
