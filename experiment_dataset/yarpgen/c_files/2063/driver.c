#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)100;
short var_7 = (short)-27619;
unsigned short var_8 = (unsigned short)46668;
unsigned short var_9 = (unsigned short)15094;
signed char var_11 = (signed char)106;
short var_13 = (short)17818;
unsigned long long int var_14 = 2682377557093972591ULL;
unsigned char var_15 = (unsigned char)97;
int zero = 0;
unsigned short var_16 = (unsigned short)60330;
unsigned long long int var_17 = 13715856002644623898ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)99;
unsigned short arr_0 [13] ;
signed char arr_1 [13] [13] ;
int arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8568 : (unsigned short)24841;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 441164169;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)202;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
