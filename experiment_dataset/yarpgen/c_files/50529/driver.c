#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2606262831U;
short var_1 = (short)11278;
short var_3 = (short)-3241;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_10 = (short)-26043;
unsigned char var_11 = (unsigned char)42;
short var_12 = (short)-24992;
short var_13 = (short)17598;
short var_14 = (short)20086;
unsigned char var_15 = (unsigned char)227;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)186;
unsigned char var_18 = (unsigned char)215;
unsigned int arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1127079278U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 439251935541130474ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3267593202U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
