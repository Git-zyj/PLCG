#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25038;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)10731;
long long int var_5 = 2236388114176608174LL;
unsigned short var_9 = (unsigned short)30205;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned char var_13 = (unsigned char)50;
int var_14 = 694637939;
unsigned short var_15 = (unsigned short)61724;
unsigned char var_16 = (unsigned char)126;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15583050023307049306ULL;
signed char var_19 = (signed char)49;
unsigned char arr_0 [13] ;
unsigned short arr_4 [12] ;
unsigned int arr_7 [12] [12] ;
short arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)18598;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 59151233U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)28243;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
