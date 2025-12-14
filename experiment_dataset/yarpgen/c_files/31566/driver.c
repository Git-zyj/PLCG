#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17091;
signed char var_1 = (signed char)-117;
unsigned long long int var_2 = 16142156641921754547ULL;
signed char var_3 = (signed char)-125;
unsigned char var_5 = (unsigned char)36;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)101;
short var_10 = (short)-23943;
int zero = 0;
signed char var_11 = (signed char)112;
short var_12 = (short)-21187;
short var_13 = (short)12469;
unsigned char var_14 = (unsigned char)210;
short arr_0 [23] ;
int arr_1 [23] [23] ;
short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)11230;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -1420306146;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-7050;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
