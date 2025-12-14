#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4209315681893741705ULL;
unsigned long long int var_2 = 13474161736987046486ULL;
_Bool var_4 = (_Bool)1;
int var_8 = 839814842;
unsigned char var_9 = (unsigned char)95;
unsigned short var_10 = (unsigned short)46971;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)99;
signed char var_17 = (signed char)7;
unsigned int var_18 = 469505416U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)53874;
int var_22 = -329608920;
signed char var_23 = (signed char)-106;
unsigned int var_24 = 3798379960U;
unsigned long long int arr_1 [12] [12] ;
_Bool arr_2 [12] ;
unsigned char arr_3 [12] [12] ;
_Bool arr_6 [12] [12] ;
unsigned short arr_10 [12] [12] [12] [12] ;
_Bool arr_13 [12] [12] [12] [12] ;
unsigned short arr_11 [12] ;
unsigned long long int arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 300447278699745077ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41244;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned short)39074;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 16557485209106754436ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
