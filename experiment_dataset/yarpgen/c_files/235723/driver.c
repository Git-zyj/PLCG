#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 2127302415;
unsigned int var_5 = 1019142086U;
short var_6 = (short)1573;
int var_8 = -211980182;
long long int var_9 = -554663260449748909LL;
unsigned short var_12 = (unsigned short)22482;
short var_18 = (short)-28185;
int zero = 0;
unsigned short var_20 = (unsigned short)28192;
long long int var_21 = 3738086972573845355LL;
unsigned short var_22 = (unsigned short)59870;
unsigned char arr_0 [14] ;
long long int arr_2 [14] ;
unsigned short arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 6272096796007583605LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned short)27571;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
