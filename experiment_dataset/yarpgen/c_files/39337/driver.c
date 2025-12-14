#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)13131;
signed char var_5 = (signed char)49;
unsigned short var_7 = (unsigned short)8180;
unsigned int var_8 = 3492824014U;
unsigned long long int var_10 = 7407040763338991192ULL;
unsigned int var_11 = 3186992252U;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_16 = -451290194;
long long int var_17 = 8915492500128978125LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -1936452962520920018LL;
signed char var_20 = (signed char)-25;
signed char var_21 = (signed char)92;
unsigned int var_22 = 1555814827U;
unsigned long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
short arr_5 [22] ;
_Bool arr_6 [22] [22] [22] ;
long long int arr_8 [22] [22] [22] ;
long long int arr_4 [22] ;
unsigned short arr_13 [10] [10] ;
short arr_14 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 10643521527990794495ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3196885775U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-25908;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -218555237884112654LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -5203807657993156038LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)21398 : (unsigned short)2355;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)1587 : (short)-16132;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
