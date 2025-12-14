#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -229279484;
unsigned long long int var_4 = 7832088764647193208ULL;
int var_5 = 1475452680;
unsigned int var_7 = 2218320655U;
int var_10 = 1658548431;
int zero = 0;
unsigned int var_12 = 377059365U;
int var_13 = 1138467359;
void init() {
}

void checksum() {
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
