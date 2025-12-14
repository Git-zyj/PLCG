#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1512584842U;
signed char var_4 = (signed char)-122;
int var_6 = -1377455676;
unsigned short var_8 = (unsigned short)17004;
short var_11 = (short)-5606;
signed char var_12 = (signed char)85;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)21;
int zero = 0;
unsigned char var_15 = (unsigned char)231;
short var_16 = (short)-1848;
long long int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned short arr_2 [13] ;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3338006360890229270LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1948074340U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)1434;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)24799;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
