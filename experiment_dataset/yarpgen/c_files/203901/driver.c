#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)119;
signed char var_6 = (signed char)(-127 - 1);
unsigned long long int var_10 = 14597957921976254736ULL;
unsigned char var_14 = (unsigned char)35;
signed char var_16 = (signed char)-33;
int zero = 0;
unsigned long long int var_18 = 6730514147061418457ULL;
unsigned int var_19 = 934068924U;
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
