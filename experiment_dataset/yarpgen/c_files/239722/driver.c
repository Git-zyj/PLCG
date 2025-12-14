#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8495;
unsigned short var_2 = (unsigned short)55624;
unsigned short var_5 = (unsigned short)7992;
unsigned short var_6 = (unsigned short)52358;
long long int var_7 = -7703664176211231011LL;
signed char var_10 = (signed char)6;
long long int var_13 = -4515982960921030495LL;
int zero = 0;
long long int var_16 = -6583963375851405786LL;
unsigned long long int var_17 = 15371514898624759150ULL;
unsigned short var_18 = (unsigned short)2194;
long long int var_19 = -2425135642915831965LL;
long long int var_20 = 3841343392530809412LL;
unsigned short arr_1 [16] [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)24394;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10710788569379201495ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
