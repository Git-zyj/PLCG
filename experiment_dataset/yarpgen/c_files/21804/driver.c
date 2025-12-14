#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15714579255038837891ULL;
long long int var_4 = -1776612924594483371LL;
unsigned long long int var_5 = 17177896125920061743ULL;
unsigned long long int var_6 = 2347286708563057680ULL;
unsigned short var_8 = (unsigned short)61818;
signed char var_9 = (signed char)-21;
unsigned short var_10 = (unsigned short)7641;
long long int var_11 = -8863813208245599325LL;
int zero = 0;
unsigned long long int var_15 = 1069331150664738975ULL;
int var_16 = 1258406964;
_Bool var_17 = (_Bool)1;
int var_18 = -1642151389;
unsigned short var_19 = (unsigned short)46100;
int var_20 = -1943850936;
unsigned short var_21 = (unsigned short)524;
int var_22 = 957687900;
long long int var_23 = -5453214863219874566LL;
unsigned long long int var_24 = 109310757016149136ULL;
unsigned char var_25 = (unsigned char)157;
unsigned short var_26 = (unsigned short)64848;
unsigned char var_27 = (unsigned char)65;
long long int var_28 = -7585004266137129109LL;
unsigned long long int var_29 = 12458092862387589810ULL;
_Bool var_30 = (_Bool)0;
unsigned char arr_0 [24] [24] ;
unsigned short arr_2 [24] ;
int arr_5 [24] ;
unsigned long long int arr_7 [24] ;
_Bool arr_10 [24] ;
long long int arr_11 [24] [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] ;
_Bool arr_25 [13] [13] [13] [13] ;
long long int arr_3 [24] [24] ;
int arr_4 [24] ;
unsigned char arr_9 [24] ;
long long int arr_16 [24] [24] ;
unsigned long long int arr_17 [24] ;
unsigned long long int arr_20 [13] ;
signed char arr_30 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)27718;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -1430759269;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 11599617308501989376ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 5662090173487071130LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 3471569034927597197ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -1489982768572338084LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2088904337;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = 1641572611635955270LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 16228339619952629195ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = 7988270535240789624ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = (signed char)67;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
