#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6261;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 332257697U;
unsigned char var_5 = (unsigned char)203;
unsigned char var_6 = (unsigned char)119;
_Bool var_7 = (_Bool)1;
long long int var_10 = -4452122914648053705LL;
unsigned char var_12 = (unsigned char)196;
int var_13 = 935065905;
int zero = 0;
short var_14 = (short)-32582;
unsigned short var_15 = (unsigned short)24882;
_Bool var_16 = (_Bool)0;
long long int var_17 = -5569284099240276342LL;
unsigned short var_18 = (unsigned short)44312;
unsigned short arr_1 [13] ;
short arr_3 [13] [13] ;
_Bool arr_4 [13] ;
unsigned short arr_5 [13] [13] ;
int arr_8 [13] ;
unsigned short arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46127 : (unsigned short)60873;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-8901;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)21765;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 1096855429;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)10533 : (unsigned short)29540;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
