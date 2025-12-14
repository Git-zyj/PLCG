#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15076;
short var_1 = (short)-18196;
long long int var_2 = 5420350975854312618LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)92;
signed char var_10 = (signed char)123;
unsigned int var_12 = 316310186U;
long long int var_13 = 8677038233949764570LL;
int zero = 0;
unsigned long long int var_14 = 18165203711384074209ULL;
unsigned long long int var_15 = 16110714274890914068ULL;
unsigned char var_16 = (unsigned char)171;
short var_17 = (short)23865;
int var_18 = -481099104;
short arr_8 [21] [21] [21] ;
signed char arr_10 [21] [21] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-32423;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
