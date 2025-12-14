#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1696547347U;
unsigned long long int var_3 = 6115574510225288910ULL;
unsigned char var_6 = (unsigned char)209;
unsigned char var_7 = (unsigned char)30;
unsigned long long int var_12 = 7848629982908647610ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 701062504;
unsigned char var_16 = (unsigned char)65;
signed char var_17 = (signed char)-109;
_Bool arr_5 [12] [12] [12] ;
unsigned int arr_6 [12] [12] [12] ;
int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1920929075U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = -2084193124;
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
