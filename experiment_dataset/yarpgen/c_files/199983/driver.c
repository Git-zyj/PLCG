#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7041;
unsigned int var_4 = 2440042965U;
unsigned short var_8 = (unsigned short)40320;
unsigned long long int var_10 = 9447404579183390501ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)13449;
signed char var_14 = (signed char)14;
int var_15 = 1399426177;
unsigned short var_16 = (unsigned short)38497;
unsigned char arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3881278840U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)16887;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
