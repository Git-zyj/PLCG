#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
short var_1 = (short)-4004;
int var_2 = 310463421;
signed char var_3 = (signed char)-73;
unsigned int var_4 = 1322316243U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 257143174U;
long long int var_11 = -3261909864113881737LL;
unsigned long long int var_12 = 13603468897687023134ULL;
int var_13 = -778936468;
int var_14 = -2074300485;
unsigned long long int var_17 = 1985314320927643787ULL;
unsigned int var_19 = 78955116U;
int zero = 0;
unsigned short var_20 = (unsigned short)43562;
signed char var_21 = (signed char)2;
short var_22 = (short)-12701;
int var_23 = 785251521;
long long int var_24 = -3749191135428466858LL;
unsigned long long int var_25 = 13504118003611537781ULL;
signed char var_26 = (signed char)27;
signed char var_27 = (signed char)-39;
unsigned int arr_0 [13] ;
unsigned long long int arr_3 [13] ;
short arr_7 [23] ;
signed char arr_12 [21] ;
short arr_13 [21] ;
unsigned long long int arr_9 [23] ;
short arr_10 [23] [23] ;
_Bool arr_14 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1807642318U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 15025180609674053331ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)16821;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)-27998;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 3941507334811549367ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (short)30623;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
