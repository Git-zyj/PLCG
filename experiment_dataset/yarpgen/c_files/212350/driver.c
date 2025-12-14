#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2737373873846456487ULL;
unsigned short var_4 = (unsigned short)50475;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-25;
unsigned char var_7 = (unsigned char)208;
signed char var_8 = (signed char)-93;
unsigned char var_10 = (unsigned char)86;
unsigned char var_11 = (unsigned char)119;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)0;
unsigned short var_14 = (unsigned short)26430;
unsigned long long int var_15 = 16967333036430842409ULL;
_Bool arr_0 [18] ;
short arr_1 [18] ;
int arr_3 [20] ;
_Bool arr_4 [20] ;
unsigned int arr_2 [18] [18] ;
signed char arr_5 [20] ;
unsigned short arr_6 [20] [20] ;
signed char arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)28890;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 900118839;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2391668928U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)24557;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)99;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
