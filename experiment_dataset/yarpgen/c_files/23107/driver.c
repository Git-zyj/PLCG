#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)45;
int var_4 = -16571730;
short var_5 = (short)-32542;
unsigned int var_6 = 2112098162U;
unsigned int var_10 = 1022060545U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-33;
unsigned long long int var_13 = 6511643501685299569ULL;
int zero = 0;
short var_15 = (short)7619;
unsigned short var_16 = (unsigned short)53522;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
