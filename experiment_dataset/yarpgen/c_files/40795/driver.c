#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
signed char var_2 = (signed char)34;
signed char var_6 = (signed char)122;
signed char var_8 = (signed char)-19;
unsigned int var_12 = 365500380U;
unsigned char var_13 = (unsigned char)231;
int zero = 0;
int var_14 = 2060247774;
signed char var_15 = (signed char)64;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 14813698984275087078ULL;
unsigned char var_18 = (unsigned char)162;
signed char var_19 = (signed char)74;
unsigned int var_20 = 111895148U;
short arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
int arr_3 [19] [19] ;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-29342;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 358548147506288899ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1814708122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-59;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
