#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1698867789;
short var_2 = (short)-11865;
unsigned int var_5 = 3145946721U;
short var_6 = (short)-838;
unsigned int var_7 = 2324011033U;
long long int var_12 = 74565253360211887LL;
int zero = 0;
unsigned int var_14 = 1873355622U;
int var_15 = -400102142;
short var_16 = (short)-1443;
int var_17 = 1997360186;
int var_18 = -150560128;
unsigned int var_19 = 2473059503U;
unsigned int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 552451170U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
