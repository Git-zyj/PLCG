#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2795358280303534749ULL;
signed char var_8 = (signed char)67;
unsigned int var_10 = 1848409316U;
short var_11 = (short)-3247;
unsigned short var_13 = (unsigned short)7106;
_Bool var_14 = (_Bool)1;
int var_16 = 348991947;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)27849;
unsigned short var_20 = (unsigned short)35746;
unsigned int arr_0 [24] ;
_Bool arr_1 [24] ;
unsigned int arr_2 [24] ;
_Bool arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2331370306U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4005857049U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
