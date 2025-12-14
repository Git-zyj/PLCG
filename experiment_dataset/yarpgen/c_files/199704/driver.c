#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 607890901U;
unsigned short var_2 = (unsigned short)7656;
unsigned int var_3 = 2574047672U;
unsigned short var_5 = (unsigned short)23083;
int var_7 = -115180750;
int var_8 = 2115243923;
unsigned short var_9 = (unsigned short)52299;
int zero = 0;
unsigned short var_10 = (unsigned short)22009;
int var_11 = -698502591;
unsigned short var_12 = (unsigned short)46402;
long long int var_13 = -8482120536192161618LL;
unsigned long long int var_14 = 6244502893663303169ULL;
int var_15 = -309845137;
unsigned int var_16 = 2010122034U;
unsigned short var_17 = (unsigned short)34981;
unsigned short arr_0 [15] ;
unsigned int arr_1 [15] ;
unsigned char arr_4 [15] ;
unsigned int arr_5 [15] ;
unsigned short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)14625;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 194112829U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4263510223U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)43868;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
