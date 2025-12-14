#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)56911;
unsigned long long int var_8 = 3905120710170495062ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 181180111417617203LL;
unsigned short var_11 = (unsigned short)36041;
unsigned int var_13 = 2995394064U;
unsigned short var_15 = (unsigned short)8061;
int zero = 0;
unsigned char var_17 = (unsigned char)189;
long long int var_18 = -9122589625438352599LL;
unsigned short var_19 = (unsigned short)54127;
long long int var_20 = -4650529815996244609LL;
unsigned char var_21 = (unsigned char)100;
unsigned long long int var_22 = 4454831329754960013ULL;
unsigned long long int var_23 = 17455141058390186765ULL;
unsigned long long int var_24 = 6470736333834478932ULL;
int var_25 = 31715750;
long long int var_26 = -3878437741889770076LL;
unsigned char var_27 = (unsigned char)242;
int var_28 = -1750994770;
long long int var_29 = -2936663248835278242LL;
unsigned long long int var_30 = 11648501596869745642ULL;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 6119346188047902454ULL;
unsigned short var_33 = (unsigned short)2223;
unsigned short var_34 = (unsigned short)3531;
unsigned char var_35 = (unsigned char)100;
unsigned int arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned short arr_3 [10] [10] ;
unsigned long long int arr_4 [10] ;
unsigned char arr_12 [10] ;
unsigned short arr_15 [10] ;
long long int arr_21 [11] ;
short arr_22 [11] [11] ;
unsigned char arr_30 [11] [11] [11] [11] ;
unsigned int arr_2 [10] ;
long long int arr_6 [10] ;
unsigned short arr_11 [10] ;
_Bool arr_19 [10] ;
int arr_20 [10] [10] ;
unsigned short arr_31 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3890127188U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)58052;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)29352;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 14081708088457608631ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (unsigned short)26406;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = -3518397968152039877LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (short)21459;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)190 : (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1497019922U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 4146444258587190709LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)9328;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = -566576727;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33573 : (unsigned short)43160;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
