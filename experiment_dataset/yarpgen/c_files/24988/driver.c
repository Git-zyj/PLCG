#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3419472180U;
unsigned long long int var_1 = 12112924308561691326ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 17914725556914647328ULL;
int var_9 = 1985340829;
unsigned short var_11 = (unsigned short)43529;
int zero = 0;
unsigned int var_20 = 2968609013U;
unsigned long long int var_21 = 12900618436076142205ULL;
unsigned short var_22 = (unsigned short)15945;
unsigned int var_23 = 1477866439U;
short var_24 = (short)16730;
unsigned int arr_0 [12] ;
short arr_2 [12] ;
unsigned int arr_6 [13] ;
signed char arr_7 [13] ;
short arr_9 [16] [16] ;
unsigned int arr_10 [16] ;
unsigned long long int arr_11 [16] [16] ;
unsigned char arr_12 [16] [16] [16] ;
long long int arr_13 [16] ;
unsigned short arr_14 [16] ;
unsigned int arr_17 [16] [16] ;
short arr_4 [12] ;
long long int arr_5 [12] ;
short arr_8 [13] [13] ;
long long int arr_18 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3364538106U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-19852;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3429875745U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (short)2800;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 1326234673U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 9335999209994560132ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = -5502508849602810359LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned short)13817;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = 4047679925U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-23929 : (short)-16349;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3863552225181980850LL : -9067909654069615336LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16029 : (short)-15108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -8634612873680414448LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
