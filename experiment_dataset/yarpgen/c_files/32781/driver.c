#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35703;
unsigned int var_1 = 3733920735U;
long long int var_2 = 340884546264683772LL;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-20365;
int var_11 = 2041982705;
unsigned int var_12 = 1294479571U;
int var_14 = -1438718024;
int zero = 0;
int var_15 = 236545435;
_Bool var_16 = (_Bool)0;
int var_17 = -533967111;
unsigned int arr_0 [22] ;
unsigned int arr_1 [22] ;
_Bool arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2256095602U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 26161470U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
