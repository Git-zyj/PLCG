#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1305313908U;
int var_3 = 1932292860;
unsigned int var_8 = 1890689755U;
int zero = 0;
unsigned short var_12 = (unsigned short)14515;
short var_13 = (short)-23924;
short var_14 = (short)-30869;
void init() {
}

void checksum() {
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
