#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1850066963U;
unsigned short var_1 = (unsigned short)23014;
short var_3 = (short)2324;
short var_6 = (short)11207;
unsigned int var_7 = 1696367288U;
signed char var_8 = (signed char)75;
unsigned short var_9 = (unsigned short)58999;
short var_10 = (short)16278;
unsigned char var_12 = (unsigned char)137;
unsigned int var_13 = 2546368651U;
int zero = 0;
unsigned char var_16 = (unsigned char)154;
int var_17 = -421044302;
unsigned short var_18 = (unsigned short)33268;
long long int var_19 = -2723887205385692999LL;
signed char var_20 = (signed char)71;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)56;
int var_23 = 917334379;
unsigned long long int arr_1 [22] ;
unsigned short arr_4 [22] ;
unsigned long long int arr_5 [22] ;
unsigned int arr_6 [22] ;
short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2989517122403091756ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)44051;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 16131623966283625442ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 3883406994U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-20585;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
