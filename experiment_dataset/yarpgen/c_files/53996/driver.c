#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19037;
unsigned long long int var_2 = 13685641681749866605ULL;
int var_3 = 1473574952;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 1970452778U;
unsigned int var_12 = 3443017053U;
int zero = 0;
unsigned short var_13 = (unsigned short)21453;
unsigned int var_14 = 662284951U;
unsigned long long int var_15 = 15547837176920741181ULL;
int var_16 = 60909480;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)84;
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
