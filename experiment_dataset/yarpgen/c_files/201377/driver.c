#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
short var_2 = (short)27132;
unsigned long long int var_4 = 7842084703892959072ULL;
signed char var_5 = (signed char)-88;
unsigned long long int var_6 = 7899482553446854283ULL;
unsigned short var_7 = (unsigned short)52963;
short var_8 = (short)-19924;
short var_9 = (short)-24912;
long long int var_10 = -6918172222557719171LL;
long long int var_11 = -7216774245889128543LL;
int zero = 0;
unsigned long long int var_12 = 2149052944455978754ULL;
unsigned int var_13 = 3933114436U;
long long int var_14 = -4087097542365059548LL;
unsigned long long int var_15 = 2413593717636566057ULL;
short var_16 = (short)-3279;
unsigned int var_17 = 3415807707U;
long long int arr_0 [24] ;
signed char arr_1 [24] ;
int arr_2 [24] ;
unsigned char arr_3 [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned long long int arr_5 [24] ;
long long int arr_7 [10] ;
unsigned short arr_8 [10] ;
_Bool arr_6 [24] ;
unsigned long long int arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2077335221056410892LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 655837557;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11212214103664285162ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 7939863904168919347ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 5753432656063068997LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)16020;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 16827624013954992337ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
