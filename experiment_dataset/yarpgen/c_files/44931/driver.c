#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2643037806U;
int var_12 = 1505018538;
long long int var_14 = 7322734315251630730LL;
short var_16 = (short)-23430;
int zero = 0;
long long int var_19 = -1928058301478267800LL;
signed char var_20 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
