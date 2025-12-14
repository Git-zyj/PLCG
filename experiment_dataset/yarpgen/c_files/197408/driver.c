#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5789;
unsigned long long int var_2 = 5682713235060235983ULL;
unsigned short var_4 = (unsigned short)1281;
unsigned int var_5 = 1719763696U;
unsigned char var_7 = (unsigned char)49;
unsigned int var_8 = 3235197739U;
unsigned short var_10 = (unsigned short)50832;
unsigned short var_11 = (unsigned short)48961;
unsigned short var_12 = (unsigned short)65334;
int zero = 0;
int var_13 = -1554136300;
unsigned int var_14 = 842907783U;
unsigned short var_15 = (unsigned short)16148;
signed char var_16 = (signed char)96;
int var_17 = -600553699;
unsigned int var_18 = 2431696327U;
unsigned char arr_0 [19] ;
signed char arr_1 [19] [19] ;
short arr_2 [19] ;
unsigned long long int arr_3 [19] ;
short arr_6 [19] ;
unsigned int arr_7 [19] [19] [19] ;
unsigned int arr_11 [19] [19] [19] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)10947;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 16250367936841087799ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-22102 : (short)-12884;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1419647317U : 3852232150U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2721754896U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2595257398U : 1084440370U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
