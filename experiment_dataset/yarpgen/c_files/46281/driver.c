#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
_Bool var_1 = (_Bool)1;
int var_2 = 1653863998;
short var_3 = (short)23098;
_Bool var_4 = (_Bool)1;
long long int var_5 = 5798592345500228988LL;
unsigned long long int var_7 = 11943902337445628039ULL;
unsigned char var_9 = (unsigned char)151;
unsigned long long int var_10 = 804512317902503486ULL;
unsigned int var_11 = 3542117785U;
int zero = 0;
unsigned int var_12 = 502897574U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2630835832U;
unsigned char var_15 = (unsigned char)52;
unsigned long long int var_16 = 5210516969478848739ULL;
long long int var_17 = 1776459514152630241LL;
unsigned int var_18 = 2468332953U;
long long int var_19 = 77431730226162448LL;
int var_20 = 582716471;
long long int arr_3 [23] [23] [23] ;
unsigned int arr_4 [23] ;
unsigned char arr_5 [23] [23] ;
_Bool arr_10 [23] [23] [23] [23] ;
unsigned int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5322995331184704560LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 372390715U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 2426661489U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
