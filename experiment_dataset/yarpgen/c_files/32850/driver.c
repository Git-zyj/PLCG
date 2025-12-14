#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7072689233592196084ULL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)0;
signed char var_13 = (signed char)120;
long long int var_15 = 7407096738719635942LL;
unsigned int var_16 = 1524706064U;
int zero = 0;
unsigned long long int var_19 = 1953235586616224137ULL;
unsigned int var_20 = 2190332966U;
short var_21 = (short)-19767;
unsigned int var_22 = 1754309327U;
signed char arr_4 [15] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1633804427;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
