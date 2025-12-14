#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 496493422;
long long int var_1 = 749211139584875696LL;
unsigned short var_2 = (unsigned short)41713;
int var_3 = 1882487070;
unsigned short var_4 = (unsigned short)64421;
unsigned short var_5 = (unsigned short)49915;
short var_6 = (short)-13019;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1335905024U;
short var_10 = (short)274;
_Bool var_11 = (_Bool)1;
short var_12 = (short)12381;
int zero = 0;
unsigned int var_13 = 1828872373U;
unsigned long long int var_14 = 14838608183931115350ULL;
unsigned short var_15 = (unsigned short)23091;
unsigned short var_16 = (unsigned short)43454;
short var_17 = (short)8796;
unsigned long long int var_18 = 1951756941078977068ULL;
short var_19 = (short)14014;
unsigned short var_20 = (unsigned short)33601;
short var_21 = (short)-24303;
long long int var_22 = 6294505341141567433LL;
short arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned char arr_3 [12] [12] ;
long long int arr_6 [12] [12] [12] [12] ;
unsigned char arr_7 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)10926;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2216274771U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 4237457305U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -6875710063062225525LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)195;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
