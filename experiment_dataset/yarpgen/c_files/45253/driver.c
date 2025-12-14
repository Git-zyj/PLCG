#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 67733290U;
short var_1 = (short)29514;
short var_4 = (short)32219;
unsigned long long int var_5 = 7268706908646929558ULL;
unsigned long long int var_6 = 9517072047333809878ULL;
signed char var_10 = (signed char)67;
unsigned int var_11 = 3961679669U;
unsigned int var_13 = 1657744088U;
unsigned long long int var_14 = 14642215435179597790ULL;
int zero = 0;
int var_15 = -1015251255;
unsigned int var_16 = 3148512806U;
int var_17 = 346133826;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
