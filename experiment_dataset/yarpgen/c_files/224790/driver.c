#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19311;
short var_4 = (short)19953;
short var_8 = (short)-14875;
unsigned char var_10 = (unsigned char)41;
short var_11 = (short)20622;
int zero = 0;
unsigned char var_13 = (unsigned char)170;
short var_14 = (short)6699;
short var_15 = (short)-7256;
_Bool var_16 = (_Bool)1;
short arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)17303;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
