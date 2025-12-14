#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned short var_2 = (unsigned short)13339;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)38464;
unsigned short var_7 = (unsigned short)9125;
unsigned short var_8 = (unsigned short)3076;
int var_10 = -1487196057;
unsigned char var_11 = (unsigned char)175;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)126;
short var_14 = (short)26609;
long long int var_15 = 6214089904039652059LL;
short var_16 = (short)421;
_Bool var_17 = (_Bool)1;
long long int var_18 = 830923466621259168LL;
signed char var_19 = (signed char)41;
unsigned char var_20 = (unsigned char)229;
unsigned short var_21 = (unsigned short)43629;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)201;
_Bool var_25 = (_Bool)1;
long long int var_26 = -5230167206266652773LL;
short arr_1 [12] ;
unsigned short arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
long long int arr_6 [11] [11] ;
long long int arr_8 [11] [11] [11] ;
_Bool arr_9 [11] ;
signed char arr_10 [11] [11] [11] ;
int arr_15 [12] [12] ;
signed char arr_2 [12] ;
short arr_12 [11] ;
short arr_16 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)623;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)1678;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)4915;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 7163129941117453255LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -8860499874496953421LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -1778117326 : 1950647516;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-8833 : (short)-12261;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-23801 : (short)-27873;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
