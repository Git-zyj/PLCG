#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)41;
unsigned int var_6 = 3907777623U;
unsigned char var_7 = (unsigned char)62;
long long int var_9 = -4512277590876691266LL;
unsigned short var_13 = (unsigned short)32813;
long long int var_14 = 1787714223818614794LL;
unsigned long long int var_15 = 7967040635572341744ULL;
unsigned int var_18 = 3438997511U;
int zero = 0;
unsigned long long int var_20 = 8798872656216577520ULL;
unsigned short var_21 = (unsigned short)52807;
long long int var_22 = 1024537799614243025LL;
unsigned char var_23 = (unsigned char)106;
unsigned int var_24 = 780993157U;
unsigned int var_25 = 1741021959U;
unsigned char arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
long long int arr_4 [23] ;
unsigned char arr_3 [23] [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)30283;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 3993258063860730811LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)30455;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
