#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20392;
short var_3 = (short)-14542;
unsigned long long int var_4 = 2272774583867941636ULL;
long long int var_7 = 674314108035918775LL;
unsigned char var_8 = (unsigned char)192;
short var_12 = (short)-20890;
unsigned char var_13 = (unsigned char)218;
int zero = 0;
int var_14 = -1931809896;
unsigned char var_15 = (unsigned char)213;
long long int var_16 = 8693814741415503620LL;
short var_17 = (short)16951;
unsigned short arr_2 [13] ;
int arr_3 [13] ;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30030 : (unsigned short)12662;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1043697640 : -134774550;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
