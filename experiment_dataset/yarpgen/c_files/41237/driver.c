#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17329;
unsigned char var_1 = (unsigned char)57;
unsigned short var_2 = (unsigned short)44382;
unsigned int var_3 = 1914455581U;
_Bool var_4 = (_Bool)0;
int var_5 = -1636606218;
int var_6 = -1246909646;
unsigned short var_7 = (unsigned short)16797;
long long int var_8 = 936529982549654983LL;
long long int var_9 = 7454416786532656774LL;
long long int var_10 = 8582773227719559508LL;
int var_11 = -997409802;
unsigned long long int var_12 = 9614103548292261558ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 1958966002;
unsigned long long int var_15 = 1936960603643121321ULL;
unsigned char var_16 = (unsigned char)92;
int zero = 0;
unsigned long long int var_17 = 2296944405988623717ULL;
short var_18 = (short)32021;
unsigned char var_19 = (unsigned char)240;
unsigned short var_20 = (unsigned short)8928;
unsigned char var_21 = (unsigned char)78;
unsigned short var_22 = (unsigned short)10594;
long long int var_23 = -1149391363876523253LL;
long long int var_24 = -7295777406059302917LL;
unsigned short arr_12 [25] [25] [25] [25] ;
unsigned char arr_13 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)21575 : (unsigned short)51360;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)210 : (unsigned char)63;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
