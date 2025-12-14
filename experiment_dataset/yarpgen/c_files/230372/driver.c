#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -105201591756927306LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -5677690631831333208LL;
unsigned int var_3 = 2398796688U;
unsigned char var_4 = (unsigned char)132;
unsigned char var_5 = (unsigned char)158;
long long int var_6 = 1055137268828290849LL;
_Bool var_7 = (_Bool)1;
int var_8 = -1850656577;
short var_9 = (short)-10685;
int zero = 0;
unsigned long long int var_12 = 12593315098336804474ULL;
long long int var_13 = -6620507771939062357LL;
short var_14 = (short)12041;
long long int var_15 = -5195496157501735976LL;
unsigned long long int var_16 = 13917920840828686677ULL;
long long int var_17 = -4500677489068878016LL;
signed char var_18 = (signed char)121;
unsigned int var_19 = 2334520374U;
unsigned long long int arr_0 [21] [21] ;
int arr_3 [21] ;
unsigned short arr_6 [15] [15] ;
_Bool arr_10 [13] [13] ;
long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 9822794902995811279ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 69059397;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)39684;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 8076988327021492231LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
