#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3819340714391008401ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)127;
signed char var_9 = (signed char)87;
int var_12 = -1793148429;
unsigned long long int var_15 = 14968678623627491985ULL;
long long int var_16 = 3473962752987265993LL;
int zero = 0;
unsigned long long int var_20 = 7272356525872842784ULL;
signed char var_21 = (signed char)100;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 1777984971670413114ULL;
unsigned short arr_0 [20] ;
unsigned char arr_1 [20] ;
_Bool arr_4 [20] ;
unsigned char arr_5 [20] [20] ;
unsigned char arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50555 : (unsigned short)41279;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)0 : (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)203 : (unsigned char)54;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
