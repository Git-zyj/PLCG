#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 899643507U;
long long int var_2 = 3229990365550535103LL;
unsigned short var_3 = (unsigned short)8583;
short var_4 = (short)-14921;
unsigned long long int var_5 = 11796451344571215773ULL;
unsigned char var_6 = (unsigned char)17;
unsigned long long int var_7 = 3606856788045606066ULL;
unsigned char var_9 = (unsigned char)31;
short var_10 = (short)-2970;
unsigned int var_11 = 1233117201U;
int var_12 = 1219802420;
int zero = 0;
signed char var_13 = (signed char)122;
long long int var_14 = -993860036405910219LL;
long long int var_15 = -2025333284996057548LL;
signed char var_16 = (signed char)-116;
signed char var_17 = (signed char)48;
unsigned char var_18 = (unsigned char)46;
unsigned short var_19 = (unsigned short)14848;
unsigned int var_20 = 1062384809U;
unsigned char var_21 = (unsigned char)240;
long long int var_22 = -4300386755746371400LL;
short var_23 = (short)-1408;
_Bool arr_0 [11] [11] ;
unsigned int arr_2 [11] [11] ;
unsigned int arr_4 [11] [11] [11] [11] ;
unsigned char arr_11 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1776946216U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 3135749161U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)192;
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
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
