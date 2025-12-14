#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 313234973U;
short var_1 = (short)21719;
unsigned int var_2 = 1194004423U;
unsigned long long int var_6 = 193499662617802527ULL;
short var_9 = (short)-23750;
unsigned int var_10 = 2904419186U;
int zero = 0;
unsigned int var_11 = 1014774349U;
unsigned long long int var_12 = 13404578087424328175ULL;
unsigned long long int var_13 = 13967317730087294143ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
