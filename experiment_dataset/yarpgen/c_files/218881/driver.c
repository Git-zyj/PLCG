#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1481688716U;
unsigned int var_7 = 513666539U;
unsigned long long int var_9 = 12848880362258438495ULL;
short var_12 = (short)-25498;
int zero = 0;
signed char var_14 = (signed char)-96;
int var_15 = 703604391;
short var_16 = (short)-11761;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
