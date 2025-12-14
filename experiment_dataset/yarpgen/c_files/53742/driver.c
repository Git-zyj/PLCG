#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3132123675U;
int var_2 = 1566845025;
int var_5 = 473946773;
unsigned long long int var_7 = 10128241854360112801ULL;
int var_9 = 2142642704;
signed char var_10 = (signed char)-60;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-9;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = -1751542554475653LL;
long long int var_16 = 6042175868186684961LL;
signed char var_17 = (signed char)38;
int var_18 = -497837577;
short var_19 = (short)-3171;
signed char var_20 = (signed char)-88;
unsigned long long int var_21 = 8704485098087951385ULL;
int var_22 = 992023952;
unsigned int arr_0 [24] ;
signed char arr_1 [24] [24] ;
signed char arr_4 [24] ;
unsigned short arr_6 [24] [24] ;
signed char arr_8 [24] [24] ;
int arr_10 [24] ;
unsigned long long int arr_18 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 406332027U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)27746;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 917457410;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 11842808033466570756ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
