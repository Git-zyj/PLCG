#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3814864030U;
unsigned int var_7 = 1248412431U;
unsigned int var_10 = 2542006412U;
unsigned int var_14 = 2935408829U;
int zero = 0;
unsigned int var_15 = 1470275809U;
unsigned int var_16 = 1639691044U;
unsigned int var_17 = 847619658U;
unsigned int var_18 = 2411627087U;
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
