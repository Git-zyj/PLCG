#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2436;
unsigned char var_1 = (unsigned char)168;
unsigned short var_5 = (unsigned short)63641;
unsigned char var_6 = (unsigned char)122;
unsigned int var_9 = 4050658370U;
unsigned int var_10 = 1586456049U;
unsigned int var_13 = 200960638U;
int zero = 0;
unsigned char var_15 = (unsigned char)81;
unsigned char var_16 = (unsigned char)76;
unsigned char var_17 = (unsigned char)126;
int var_18 = 1797935076;
signed char var_19 = (signed char)122;
unsigned short var_20 = (unsigned short)61864;
unsigned int var_21 = 855053126U;
int var_22 = 276703284;
unsigned char arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned char arr_2 [25] ;
unsigned char arr_5 [24] ;
unsigned char arr_3 [25] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)87 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)9;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
