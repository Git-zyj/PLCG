#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1806370608U;
long long int var_5 = 340299626677612060LL;
long long int var_6 = -640024856585562181LL;
unsigned int var_7 = 3417779095U;
int zero = 0;
int var_11 = -2115313262;
signed char var_12 = (signed char)97;
int var_13 = 597465156;
unsigned int var_14 = 1192038194U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2077335207U;
_Bool var_18 = (_Bool)1;
int var_19 = -251955133;
int var_20 = -1693486407;
unsigned long long int var_21 = 17664055036429855312ULL;
unsigned short var_22 = (unsigned short)64210;
unsigned char var_23 = (unsigned char)119;
signed char var_24 = (signed char)-4;
unsigned long long int var_25 = 1982233622926437030ULL;
unsigned long long int var_26 = 19763751299137689ULL;
_Bool arr_8 [18] [18] ;
_Bool arr_9 [18] [18] ;
unsigned int arr_10 [18] [18] [18] ;
signed char arr_11 [18] [18] [18] [18] ;
_Bool arr_21 [18] [18] [18] [18] ;
unsigned long long int arr_30 [23] ;
long long int arr_31 [23] ;
unsigned short arr_34 [20] ;
int arr_35 [20] ;
unsigned int arr_19 [18] ;
unsigned short arr_28 [18] ;
int arr_29 [18] ;
unsigned short arr_32 [23] [23] ;
unsigned long long int arr_33 [23] ;
_Bool arr_36 [20] ;
unsigned long long int arr_37 [20] [20] ;
signed char arr_38 [20] ;
int arr_39 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3482853972U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 14873736640606281182ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 2106733178939242651LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59321 : (unsigned short)14300;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = -1477617749;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 436438792U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = (unsigned short)14765;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = -1188605978;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned short)15320;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = 16041403089002976070ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? 13479685077375027150ULL : 14182373480305219204ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 961930541 : 701127829;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
