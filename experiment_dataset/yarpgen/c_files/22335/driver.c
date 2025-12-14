#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2621757734U;
unsigned short var_4 = (unsigned short)51345;
short var_5 = (short)6338;
unsigned short var_7 = (unsigned short)43459;
unsigned short var_10 = (unsigned short)45117;
int zero = 0;
unsigned long long int var_11 = 5140083288068224815ULL;
unsigned char var_12 = (unsigned char)19;
short var_13 = (short)31592;
unsigned long long int var_14 = 5641059024326718680ULL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-27885;
short arr_3 [12] ;
short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-2876;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)14170 : (short)-21513;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
