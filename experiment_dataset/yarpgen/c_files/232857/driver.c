#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30936;
unsigned long long int var_4 = 4417441070600961814ULL;
unsigned int var_11 = 3371502147U;
unsigned long long int var_15 = 11435531424009426836ULL;
unsigned short var_16 = (unsigned short)24281;
unsigned long long int var_17 = 11397921338774428778ULL;
unsigned long long int var_18 = 10174133032728524189ULL;
unsigned short var_19 = (unsigned short)15818;
int zero = 0;
short var_20 = (short)-3524;
short var_21 = (short)31458;
short var_22 = (short)5304;
unsigned int var_23 = 703607600U;
unsigned long long int var_24 = 7115338864762410516ULL;
unsigned long long int var_25 = 11791728295371725066ULL;
unsigned int arr_0 [10] [10] ;
unsigned short arr_1 [10] [10] ;
unsigned int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 4136671973U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)63848;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1670119405U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
