#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1969874553;
unsigned int var_1 = 2849666797U;
short var_8 = (short)23325;
unsigned int var_9 = 3212806938U;
_Bool var_12 = (_Bool)0;
signed char var_16 = (signed char)-92;
int zero = 0;
signed char var_18 = (signed char)-85;
unsigned short var_19 = (unsigned short)59255;
long long int var_20 = 6087266358269745238LL;
unsigned short var_21 = (unsigned short)65014;
unsigned int arr_3 [24] [24] ;
unsigned short arr_4 [24] ;
short arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 4241754398U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)38308;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13080 : (short)-8912;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
