#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7388;
unsigned short var_1 = (unsigned short)811;
short var_2 = (short)-29839;
unsigned short var_8 = (unsigned short)721;
unsigned short var_9 = (unsigned short)23667;
short var_10 = (short)26872;
int zero = 0;
unsigned short var_12 = (unsigned short)46487;
short var_13 = (short)-6790;
unsigned short var_14 = (unsigned short)41374;
unsigned short arr_0 [16] [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)29622;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-7836;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
