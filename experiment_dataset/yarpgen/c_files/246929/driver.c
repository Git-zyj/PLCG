#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned long long int var_1 = 3183446212681623792ULL;
unsigned long long int var_2 = 8615986446696624212ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 11563800253300588879ULL;
signed char var_5 = (signed char)-96;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 16265861367906646307ULL;
unsigned long long int var_8 = 3645558348898486600ULL;
long long int var_9 = -2886075514272251009LL;
int zero = 0;
signed char var_10 = (signed char)-15;
unsigned long long int var_11 = 15268084408912663107ULL;
unsigned int var_12 = 76681775U;
unsigned long long int var_13 = 16410203729156956379ULL;
unsigned int var_14 = 1573540057U;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7123625262441011955LL;
unsigned short var_17 = (unsigned short)58812;
int var_18 = -40532219;
unsigned int var_19 = 569538439U;
unsigned short var_20 = (unsigned short)62856;
long long int var_21 = 37557183311486953LL;
int var_22 = -1490913031;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1227555339U;
unsigned long long int var_25 = 2297178293209981768ULL;
_Bool arr_0 [15] ;
unsigned int arr_2 [15] ;
long long int arr_7 [18] ;
short arr_8 [18] [18] ;
long long int arr_10 [18] ;
int arr_11 [18] [18] ;
long long int arr_12 [18] [18] [18] ;
int arr_13 [18] [18] [18] ;
unsigned long long int arr_15 [18] ;
long long int arr_19 [18] [18] [18] ;
int arr_21 [18] [18] [18] ;
_Bool arr_3 [15] ;
unsigned int arr_4 [15] ;
_Bool arr_5 [15] ;
int arr_6 [15] [15] ;
unsigned int arr_9 [18] ;
unsigned long long int arr_14 [18] [18] ;
unsigned int arr_17 [18] ;
unsigned long long int arr_20 [18] ;
int arr_23 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 748104869U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -5920394347633134060LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-11605;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -3623355790639856237LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = -1209537583;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -2651936238400317092LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1057655010 : 1280896249;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 17610607164520825168ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = -5238586051015978287LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -1434748311;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 3598699140U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -1101556317;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 475078065U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 6914571385168788588ULL : 6457342209084891857ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1645962005U : 3501758901U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 2255062386813450885ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = -263458167;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
