#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2498132847012217118LL;
unsigned long long int var_7 = 7050128928848837558ULL;
short var_8 = (short)26817;
unsigned long long int var_9 = 17679137244852125527ULL;
unsigned long long int var_11 = 5669191371721655848ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)44144;
_Bool var_15 = (_Bool)0;
int var_16 = 1294762772;
short var_17 = (short)-25313;
unsigned int var_18 = 1509889534U;
unsigned char var_19 = (unsigned char)96;
short arr_2 [10] [10] ;
_Bool arr_3 [10] [10] [10] ;
unsigned short arr_4 [10] [10] ;
unsigned long long int arr_9 [21] ;
_Bool arr_6 [10] ;
short arr_7 [10] ;
signed char arr_10 [21] ;
_Bool arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)17067;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)48139;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 6611404940437767585ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)14000 : (short)-3378;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
