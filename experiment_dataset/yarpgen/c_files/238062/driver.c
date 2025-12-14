#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14608537153546967657ULL;
short var_2 = (short)-26373;
unsigned int var_3 = 4059353947U;
int var_4 = 603130394;
short var_5 = (short)-24120;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7693327530913421253LL;
unsigned long long int var_10 = 9085437074292069276ULL;
int zero = 0;
unsigned int var_11 = 443167772U;
unsigned short var_12 = (unsigned short)47351;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2814002850752088344ULL;
long long int var_15 = -5225078246079384910LL;
unsigned int var_16 = 1584872294U;
short var_17 = (short)26211;
short arr_1 [22] ;
signed char arr_2 [22] ;
_Bool arr_4 [22] [22] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned int arr_6 [22] ;
unsigned short arr_12 [11] [11] [11] ;
_Bool arr_15 [11] [11] [11] ;
short arr_16 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-27699;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 2878492177U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)62560;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-23969;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
