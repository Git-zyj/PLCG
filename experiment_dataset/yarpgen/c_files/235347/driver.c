#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1886402133;
unsigned long long int var_7 = 15536928560345112930ULL;
unsigned int var_11 = 4290615945U;
short var_12 = (short)-319;
int zero = 0;
unsigned long long int var_13 = 14231678419291034813ULL;
unsigned char var_14 = (unsigned char)76;
int var_15 = 747024060;
unsigned long long int var_16 = 16071740011281363844ULL;
long long int var_17 = -3046381135666844821LL;
unsigned short var_18 = (unsigned short)17976;
unsigned long long int var_19 = 6394874718346588201ULL;
unsigned short arr_3 [25] ;
int arr_14 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)49885;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -1848546984 : 813906114;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
