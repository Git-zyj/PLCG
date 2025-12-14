#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -898262066;
_Bool var_1 = (_Bool)0;
short var_4 = (short)-2881;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 13180604783564930247ULL;
unsigned int var_13 = 358074310U;
int zero = 0;
short var_14 = (short)2058;
int var_15 = -165445869;
signed char var_16 = (signed char)-101;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 2346388409649597781ULL;
unsigned short var_19 = (unsigned short)44857;
unsigned short arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned char arr_2 [25] [25] ;
unsigned long long int arr_7 [10] ;
int arr_9 [10] [10] ;
_Bool arr_12 [10] [10] ;
unsigned int arr_15 [22] ;
signed char arr_16 [22] ;
unsigned short arr_5 [25] [25] ;
unsigned short arr_17 [22] ;
int arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)23228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3452147466634316915ULL : 1743986329652714254ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 446863579;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 532703849U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)25066;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned short)33432;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 1093782541;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
