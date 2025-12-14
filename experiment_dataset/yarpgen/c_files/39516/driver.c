#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)75;
int var_7 = 847180310;
unsigned long long int var_11 = 9519082033530647654ULL;
unsigned short var_14 = (unsigned short)29361;
int var_15 = -1870679300;
short var_17 = (short)85;
int zero = 0;
int var_20 = -699165306;
signed char var_21 = (signed char)31;
unsigned char var_22 = (unsigned char)246;
unsigned short var_23 = (unsigned short)14075;
short arr_0 [15] [15] ;
short arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
unsigned short arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)14757;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)14015;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 16967087865067716927ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)7855;
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
