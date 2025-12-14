#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4758;
short var_1 = (short)-18101;
unsigned int var_2 = 178485606U;
unsigned short var_4 = (unsigned short)64584;
signed char var_8 = (signed char)-5;
long long int var_9 = 269516261329194485LL;
short var_10 = (short)-2885;
unsigned char var_12 = (unsigned char)239;
long long int var_13 = -5428367522127600659LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)101;
short var_16 = (short)-5427;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-836;
_Bool var_19 = (_Bool)1;
long long int var_20 = 402154026882184997LL;
signed char var_21 = (signed char)29;
short var_22 = (short)31696;
short var_23 = (short)13147;
signed char var_24 = (signed char)-16;
unsigned short var_25 = (unsigned short)60472;
unsigned char var_26 = (unsigned char)224;
unsigned char var_27 = (unsigned char)190;
int arr_0 [10] ;
signed char arr_1 [10] ;
int arr_2 [10] [10] [10] ;
unsigned char arr_7 [22] ;
unsigned char arr_8 [22] ;
signed char arr_15 [15] [15] ;
int arr_6 [10] [10] [10] [10] ;
_Bool arr_10 [22] [22] ;
unsigned int arr_11 [22] ;
unsigned long long int arr_14 [22] [22] ;
unsigned short arr_17 [15] [15] ;
unsigned short arr_18 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1289074142;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -2073063857;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1886426616;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 2504613715U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = 15322455609687923383ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)54785;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned short)23982;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
