#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18598;
unsigned short var_1 = (unsigned short)53222;
unsigned short var_3 = (unsigned short)30778;
unsigned short var_4 = (unsigned short)23868;
int zero = 0;
int var_11 = 647542005;
unsigned short var_12 = (unsigned short)48774;
signed char var_13 = (signed char)-104;
signed char var_14 = (signed char)123;
int var_15 = 726877616;
unsigned short var_16 = (unsigned short)17934;
unsigned short var_17 = (unsigned short)38584;
signed char var_18 = (signed char)-84;
signed char arr_0 [24] ;
signed char arr_1 [24] ;
int arr_2 [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 938111287;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -684252685;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
