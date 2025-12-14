#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)219;
unsigned int var_3 = 1226115727U;
unsigned char var_4 = (unsigned char)19;
unsigned long long int var_6 = 11227815342857079718ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2699544500U;
int zero = 0;
unsigned char var_13 = (unsigned char)38;
short var_14 = (short)-17469;
short var_15 = (short)21320;
int var_16 = -1004335547;
signed char var_17 = (signed char)49;
unsigned int var_18 = 3120312146U;
long long int var_19 = -5591472586796050041LL;
int var_20 = -305802000;
_Bool var_21 = (_Bool)0;
long long int arr_0 [10] ;
unsigned int arr_6 [23] ;
int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -6399070364107344615LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1188736460U : 369965709U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1085343527 : -1565495074;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
