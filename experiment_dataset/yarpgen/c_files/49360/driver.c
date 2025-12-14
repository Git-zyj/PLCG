#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3495973120U;
unsigned short var_3 = (unsigned short)2694;
int var_4 = -683656928;
unsigned long long int var_6 = 2482885787097566711ULL;
long long int var_7 = 989521559332863412LL;
unsigned int var_8 = 235911074U;
unsigned long long int var_9 = 5271375338927040410ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_14 = 33712224;
long long int var_15 = 2734230696172596950LL;
unsigned short var_16 = (unsigned short)48132;
signed char var_17 = (signed char)-22;
unsigned short var_18 = (unsigned short)3879;
unsigned int arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 791857080U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
