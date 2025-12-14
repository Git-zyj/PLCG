#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1121031637;
unsigned int var_2 = 2151030254U;
unsigned int var_6 = 2680054188U;
unsigned int var_11 = 946152951U;
unsigned long long int var_16 = 3141044638921892840ULL;
signed char var_17 = (signed char)7;
int zero = 0;
short var_18 = (short)-11166;
long long int var_19 = -5878985720292864419LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)59614;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2648081075U;
int var_24 = -199984615;
unsigned int arr_0 [18] [18] ;
short arr_1 [18] ;
long long int arr_3 [11] ;
_Bool arr_4 [11] ;
unsigned long long int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2285668079U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)3724;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -3632849744803587236LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 563167594958400453ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
