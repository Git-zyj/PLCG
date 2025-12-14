#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9139;
signed char var_1 = (signed char)-97;
short var_7 = (short)15013;
short var_8 = (short)-30265;
short var_10 = (short)21680;
signed char var_11 = (signed char)57;
unsigned int var_12 = 143677055U;
signed char var_13 = (signed char)-59;
int zero = 0;
unsigned long long int var_15 = 6427519197515459733ULL;
unsigned int var_16 = 3465386264U;
short var_17 = (short)6700;
unsigned int var_18 = 381033736U;
int arr_0 [22] ;
short arr_1 [22] ;
int arr_2 [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 879215037;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-3157;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -109282500;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)30187;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
