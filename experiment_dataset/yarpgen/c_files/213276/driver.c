#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
short var_1 = (short)3973;
long long int var_3 = 1786910773081571452LL;
short var_4 = (short)425;
short var_5 = (short)26229;
short var_6 = (short)-3026;
short var_7 = (short)32402;
unsigned short var_8 = (unsigned short)46358;
unsigned long long int var_10 = 14881895228360751483ULL;
short var_11 = (short)29206;
unsigned int var_12 = 1815314389U;
unsigned long long int var_13 = 1407172223681454419ULL;
unsigned int var_14 = 2140560621U;
unsigned char var_15 = (unsigned char)109;
short var_17 = (short)-13248;
int var_18 = -1887647756;
unsigned char var_19 = (unsigned char)117;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)12069;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3375786658U;
long long int var_24 = 5065601226261168719LL;
unsigned int var_25 = 1624368319U;
unsigned int var_26 = 2938477257U;
_Bool var_27 = (_Bool)0;
int var_28 = 2135977935;
unsigned int var_29 = 2516552905U;
int arr_0 [18] [18] ;
signed char arr_1 [18] ;
unsigned char arr_3 [18] [18] ;
unsigned long long int arr_9 [18] ;
int arr_5 [18] [18] [18] ;
_Bool arr_6 [18] ;
unsigned short arr_7 [18] [18] ;
short arr_10 [18] [18] ;
_Bool arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -18952448;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 9729584726398070474ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -92558742 : -1435477640;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)231 : (unsigned short)32966;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-8739 : (short)-1600;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
