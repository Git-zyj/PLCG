#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2076995569685350LL;
unsigned char var_1 = (unsigned char)233;
short var_4 = (short)-14343;
unsigned char var_5 = (unsigned char)137;
unsigned long long int var_6 = 14222638549965775768ULL;
unsigned short var_7 = (unsigned short)8329;
signed char var_8 = (signed char)126;
signed char var_10 = (signed char)53;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-114;
signed char var_17 = (signed char)12;
long long int var_18 = -5026214941232857736LL;
unsigned int var_19 = 2349883059U;
unsigned int arr_1 [24] ;
int arr_3 [24] [24] ;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 4013349883U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -23113520 : 1976170168;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3170395085364285180LL : -8891993792134293665LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
