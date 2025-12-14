#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1785770201;
unsigned int var_2 = 907942355U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3102316978U;
int zero = 0;
unsigned int var_15 = 2933722864U;
signed char var_16 = (signed char)-60;
unsigned char var_17 = (unsigned char)129;
int arr_0 [18] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2113935246;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 504784498U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
