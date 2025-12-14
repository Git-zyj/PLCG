#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 15655785840159641721ULL;
int zero = 0;
long long int var_14 = 8364322090440584005LL;
unsigned short var_15 = (unsigned short)34694;
signed char var_16 = (signed char)70;
short var_17 = (short)-2957;
unsigned int var_18 = 1070274803U;
signed char var_19 = (signed char)125;
long long int arr_0 [23] ;
long long int arr_1 [23] ;
unsigned char arr_2 [23] ;
signed char arr_6 [16] ;
long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -7159310306062888648LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -6044674620482271391LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -7899147674916711712LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
