#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -329534562;
unsigned int var_2 = 1599183102U;
unsigned long long int var_3 = 16463072246470111297ULL;
unsigned long long int var_4 = 5558676416185820310ULL;
int var_5 = 1385745875;
unsigned long long int var_6 = 14007927817104106411ULL;
signed char var_7 = (signed char)124;
long long int var_10 = 8704914555956147330LL;
unsigned int var_11 = 1350561622U;
unsigned int var_12 = 4196029022U;
unsigned int var_13 = 707458703U;
short var_14 = (short)7001;
unsigned int var_15 = 3945774851U;
unsigned int var_16 = 2068736164U;
unsigned int var_17 = 1445005376U;
unsigned int var_18 = 597965980U;
short var_19 = (short)24724;
int zero = 0;
int var_20 = -1012539196;
short var_21 = (short)827;
unsigned int var_22 = 290862677U;
short var_23 = (short)19740;
short var_24 = (short)-32650;
unsigned long long int var_25 = 7722734185116327403ULL;
signed char var_26 = (signed char)-13;
unsigned int var_27 = 4069117948U;
signed char var_28 = (signed char)119;
long long int var_29 = -2105024608024383417LL;
short var_30 = (short)-29435;
long long int var_31 = 8931514713615870262LL;
unsigned long long int var_32 = 16286581816886554785ULL;
signed char arr_0 [10] ;
signed char arr_4 [10] [10] [10] ;
short arr_5 [10] ;
signed char arr_10 [10] [10] [10] [10] ;
unsigned int arr_17 [20] ;
signed char arr_18 [20] ;
signed char arr_20 [20] [20] ;
signed char arr_21 [20] ;
int arr_22 [20] ;
unsigned char arr_23 [20] [20] ;
short arr_24 [20] ;
signed char arr_25 [20] [20] [20] ;
unsigned long long int arr_28 [15] ;
unsigned long long int arr_32 [13] ;
short arr_33 [13] ;
_Bool arr_7 [10] [10] ;
signed char arr_8 [10] [10] ;
unsigned long long int arr_9 [10] [10] [10] ;
unsigned int arr_19 [20] [20] ;
long long int arr_26 [20] [20] [20] [20] ;
long long int arr_27 [20] ;
unsigned int arr_30 [15] [15] ;
signed char arr_34 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)2091;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 322031280U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = -1987987087;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (short)-29078;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = 5298573816723536897ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = 16986263042148382878ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = (short)19013;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 5567945133309289984ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = 259470804U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -3988654186450226730LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = -5933922062827322765LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? 3747642843U : 3337469317U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = (signed char)-4;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
