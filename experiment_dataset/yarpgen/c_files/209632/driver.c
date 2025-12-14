#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
int var_3 = -5785633;
unsigned char var_4 = (unsigned char)142;
unsigned char var_5 = (unsigned char)216;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = -1345538542;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2418910527U;
unsigned long long int var_14 = 14876676856659748354ULL;
unsigned short var_16 = (unsigned short)592;
unsigned short var_18 = (unsigned short)1105;
int zero = 0;
unsigned short var_20 = (unsigned short)20834;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 47484687U;
long long int var_23 = -1130435845075764608LL;
unsigned char var_24 = (unsigned char)119;
long long int var_25 = 5256501747738333511LL;
signed char var_26 = (signed char)42;
unsigned short var_27 = (unsigned short)41854;
signed char var_28 = (signed char)-75;
unsigned char var_29 = (unsigned char)232;
long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned short arr_4 [22] ;
unsigned char arr_6 [22] ;
unsigned short arr_7 [22] [22] ;
unsigned char arr_11 [19] [19] [19] ;
_Bool arr_12 [19] ;
signed char arr_13 [19] [19] [19] ;
long long int arr_14 [19] [19] [19] ;
unsigned int arr_2 [10] ;
unsigned char arr_3 [10] [10] ;
short arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 453804032742895991LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5149897562483353859ULL : 8518054003786051345ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)16112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)46300;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1163328040566779503LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2500625764U : 756980647U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)21 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-25726;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
