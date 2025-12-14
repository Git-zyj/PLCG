#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -792714643;
unsigned int var_9 = 2104892306U;
signed char var_11 = (signed char)-101;
long long int var_15 = -1930309485538141637LL;
unsigned long long int var_17 = 14464782798182028443ULL;
int zero = 0;
unsigned long long int var_18 = 14177483481388382277ULL;
unsigned long long int var_19 = 6084049786004316039ULL;
signed char var_20 = (signed char)-113;
long long int var_21 = -8889474846534876746LL;
unsigned short var_22 = (unsigned short)2638;
unsigned char var_23 = (unsigned char)234;
signed char var_24 = (signed char)-30;
unsigned int var_25 = 1973714322U;
unsigned short var_26 = (unsigned short)34795;
unsigned char arr_4 [13] ;
long long int arr_7 [17] ;
long long int arr_8 [17] [17] [17] ;
unsigned int arr_9 [17] [17] [17] ;
int arr_12 [17] [17] [17] ;
unsigned long long int arr_13 [17] ;
int arr_5 [13] [13] [13] ;
unsigned long long int arr_10 [17] [17] ;
long long int arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -6872341049361106295LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -4262561531365051218LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2051580320U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -581957201;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 14770523947962157395ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1102146757;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 9825064928586385362ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = 3562150057064180818LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
