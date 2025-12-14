#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2098890195;
long long int var_1 = -237441688950482308LL;
long long int var_2 = 4100788971906487958LL;
long long int var_3 = 5552372943306471096LL;
int var_5 = -241671511;
unsigned char var_8 = (unsigned char)203;
int var_9 = -266230733;
int zero = 0;
long long int var_10 = -8648815786878000279LL;
short var_11 = (short)19730;
unsigned short var_12 = (unsigned short)912;
unsigned int var_13 = 1246684104U;
unsigned char var_14 = (unsigned char)79;
unsigned short var_15 = (unsigned short)4822;
long long int var_16 = -5260990257993738376LL;
int var_17 = -206358758;
int var_18 = 1597366772;
unsigned long long int arr_6 [18] [18] ;
short arr_10 [18] ;
int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 6952319562701777411ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)-23435;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 972879585 : -391687904;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
