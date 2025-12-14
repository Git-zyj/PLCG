#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)26309;
long long int var_5 = 3662715424342230088LL;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 2255817866U;
int var_11 = -2045229905;
short var_12 = (short)-12976;
long long int var_13 = 23045888105490186LL;
unsigned long long int var_14 = 13825657790273044760ULL;
int zero = 0;
short var_15 = (short)14061;
long long int var_16 = -381612845878100154LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)209;
int var_20 = -2119194340;
short arr_0 [10] ;
short arr_1 [10] ;
unsigned short arr_3 [11] [11] ;
unsigned char arr_4 [11] ;
unsigned short arr_2 [10] [10] ;
short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-27283;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-7868;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)24592;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)43742;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)30316;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
