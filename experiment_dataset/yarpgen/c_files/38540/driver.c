#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2819350083U;
unsigned long long int var_2 = 8595417151227206148ULL;
int zero = 0;
short var_10 = (short)27751;
unsigned long long int var_11 = 3509669714984705160ULL;
unsigned int var_12 = 4110763019U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
