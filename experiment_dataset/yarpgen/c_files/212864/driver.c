#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -765544330299864039LL;
signed char var_14 = (signed char)-61;
signed char var_16 = (signed char)32;
int zero = 0;
unsigned long long int var_18 = 12143687320432741415ULL;
unsigned int var_19 = 461323747U;
void init() {
}

void checksum() {
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
