#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
long long int var_1 = -5362065754273528686LL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)164;
unsigned long long int var_6 = 18201748288033166539ULL;
unsigned char var_7 = (unsigned char)248;
short var_8 = (short)-18144;
int var_9 = -736026945;
unsigned char var_10 = (unsigned char)157;
long long int var_11 = -6517954623605119075LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-22;
signed char var_14 = (signed char)54;
unsigned char var_15 = (unsigned char)156;
unsigned char var_16 = (unsigned char)211;
unsigned int arr_2 [23] [23] ;
unsigned char arr_3 [23] [23] ;
signed char arr_4 [23] ;
_Bool arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 263671743U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
