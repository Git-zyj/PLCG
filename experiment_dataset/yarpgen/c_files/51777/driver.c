#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1116577692U;
int zero = 0;
unsigned int var_12 = 3308396668U;
int var_13 = 790907211;
unsigned int var_14 = 2614852043U;
unsigned int var_15 = 2507434611U;
unsigned short var_16 = (unsigned short)55688;
unsigned long long int var_17 = 1234496328208879501ULL;
long long int var_18 = -330573920019452276LL;
int var_19 = 703238128;
short var_20 = (short)-20780;
unsigned long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7238077039099886474ULL : 16343045312098745819ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
