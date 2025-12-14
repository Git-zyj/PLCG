#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 591471777;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-2555;
signed char var_6 = (signed char)-71;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = 1150431352;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)234;
unsigned short var_12 = (unsigned short)6380;
signed char var_13 = (signed char)45;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1945799013;
unsigned long long int var_16 = 809866139117877436ULL;
short var_17 = (short)13924;
long long int var_18 = 4426876828828604962LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)3;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)48902;
unsigned long long int var_23 = 14137329951334640218ULL;
signed char var_24 = (signed char)-17;
short var_25 = (short)28486;
int var_26 = -611888029;
int arr_1 [16] [16] ;
unsigned int arr_3 [16] ;
long long int arr_5 [17] ;
signed char arr_6 [17] ;
unsigned char arr_15 [17] ;
_Bool arr_18 [25] ;
signed char arr_19 [25] ;
_Bool arr_20 [24] [24] ;
long long int arr_21 [24] [24] ;
long long int arr_4 [16] ;
int arr_7 [17] [17] ;
_Bool arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -358133924;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 3085892711U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -2358579614124593407LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = -4377219268271197798LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -2023997345596323592LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 2015612937;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
