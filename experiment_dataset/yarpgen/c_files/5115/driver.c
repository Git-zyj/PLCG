#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)18;
short var_2 = (short)-32712;
unsigned char var_4 = (unsigned char)148;
unsigned char var_5 = (unsigned char)128;
unsigned char var_6 = (unsigned char)242;
_Bool var_7 = (_Bool)0;
int var_10 = -1420737154;
signed char var_11 = (signed char)-41;
unsigned int var_12 = 1105378065U;
int var_13 = -575125187;
int zero = 0;
unsigned long long int var_14 = 16690439156037117578ULL;
unsigned short var_15 = (unsigned short)5784;
unsigned char var_16 = (unsigned char)99;
unsigned char var_17 = (unsigned char)240;
unsigned int var_18 = 42554066U;
int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1839999541 : -1782236412;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
