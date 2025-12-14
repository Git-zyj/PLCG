#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10213831850464696912ULL;
long long int var_1 = -8076623622615030944LL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)30531;
unsigned long long int var_6 = 2732573878473376247ULL;
unsigned int var_7 = 1426080370U;
short var_8 = (short)-32065;
unsigned int var_9 = 3585667602U;
long long int var_11 = -1390087856214792713LL;
long long int var_15 = 9145773205341976982LL;
int zero = 0;
int var_16 = 1826981597;
unsigned long long int var_17 = 2455591063560515875ULL;
short var_18 = (short)-25234;
unsigned short var_19 = (unsigned short)38406;
unsigned int var_20 = 1879697102U;
long long int arr_0 [21] [21] ;
short arr_1 [21] [21] ;
long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -5157823970629600786LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-7916;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -4933935896867478474LL : 5217815505292515052LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
