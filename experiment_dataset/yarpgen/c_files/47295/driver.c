#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15116358684793293833ULL;
signed char var_1 = (signed char)105;
signed char var_3 = (signed char)83;
unsigned int var_4 = 746554472U;
signed char var_5 = (signed char)-94;
unsigned long long int var_6 = 9187880257050029617ULL;
unsigned long long int var_7 = 5398789493383274007ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 4137023295907797148ULL;
unsigned short var_10 = (unsigned short)31603;
int zero = 0;
unsigned int var_11 = 1246831393U;
unsigned long long int var_12 = 14084126984637702224ULL;
long long int var_13 = -4627229494276338449LL;
unsigned long long int var_14 = 10981341608355422489ULL;
signed char var_15 = (signed char)-87;
_Bool var_16 = (_Bool)1;
int var_17 = -1890173894;
unsigned short var_18 = (unsigned short)52421;
unsigned int var_19 = 556082212U;
unsigned long long int var_20 = 13021445993188989989ULL;
short var_21 = (short)-20881;
signed char var_22 = (signed char)43;
short var_23 = (short)4967;
short arr_0 [23] ;
short arr_1 [23] ;
_Bool arr_2 [23] ;
unsigned int arr_3 [21] ;
_Bool arr_4 [21] ;
short arr_7 [21] ;
unsigned int arr_10 [21] [21] ;
_Bool arr_15 [20] ;
unsigned short arr_5 [21] ;
int arr_6 [21] [21] ;
short arr_11 [21] [21] ;
unsigned int arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)29541;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)30802 : (short)-12335;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3650388251U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)10545;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 2479375537U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)56089;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1119324657;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (short)23622;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 863874093U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
