#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1933370841U;
unsigned int var_4 = 1093290902U;
long long int var_8 = 8707976675676548250LL;
int zero = 0;
short var_13 = (short)-30548;
unsigned int var_14 = 2000760510U;
short var_15 = (short)-23852;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
