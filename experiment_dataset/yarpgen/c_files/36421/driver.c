#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42235;
unsigned short var_2 = (unsigned short)2479;
int var_8 = -151417661;
unsigned int var_10 = 2979960942U;
unsigned int var_11 = 240354100U;
unsigned short var_13 = (unsigned short)21985;
short var_14 = (short)-18023;
_Bool var_16 = (_Bool)1;
int var_18 = -666821778;
int zero = 0;
signed char var_19 = (signed char)4;
unsigned int var_20 = 3737217598U;
unsigned int var_21 = 4106865316U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-20388;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
