#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24442;
unsigned long long int var_10 = 6593396531404580825ULL;
int zero = 0;
unsigned int var_20 = 779806036U;
unsigned long long int var_21 = 14648818961057217027ULL;
short var_22 = (short)-7821;
void init() {
}

void checksum() {
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
