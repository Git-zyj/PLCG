#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_7 = -1083884374;
short var_8 = (short)-5638;
unsigned int var_10 = 1937257328U;
int zero = 0;
signed char var_11 = (signed char)113;
_Bool var_12 = (_Bool)0;
short var_13 = (short)19176;
unsigned short var_14 = (unsigned short)49879;
unsigned int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2564012712U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
