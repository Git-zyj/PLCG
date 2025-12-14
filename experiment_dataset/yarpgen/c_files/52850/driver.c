#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1297718324;
unsigned long long int var_3 = 9881250407442943156ULL;
int var_5 = -1519367650;
unsigned short var_9 = (unsigned short)54966;
signed char var_10 = (signed char)-32;
long long int var_11 = -2960593746510226474LL;
int zero = 0;
unsigned short var_12 = (unsigned short)8306;
unsigned short var_13 = (unsigned short)64055;
int arr_0 [15] ;
int arr_2 [15] ;
unsigned short arr_8 [17] ;
long long int arr_9 [17] ;
int arr_10 [17] ;
_Bool arr_11 [17] [17] [17] ;
long long int arr_12 [17] [17] ;
unsigned long long int arr_13 [17] [17] ;
int arr_6 [15] [15] ;
signed char arr_7 [15] ;
_Bool arr_14 [17] [17] [17] ;
unsigned long long int arr_15 [17] [17] ;
_Bool arr_16 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1998669310;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -580641991;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)50747;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 7262344947975079697LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -189379970;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = -3753546117014987419LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 1660934549066336447ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 312217915;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = 17334137269769530048ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
