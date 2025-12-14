#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 7963430021145219353ULL;
int zero = 0;
unsigned long long int var_12 = 8742920412295787822ULL;
unsigned short var_13 = (unsigned short)64535;
unsigned long long int var_14 = 9668679969095803416ULL;
unsigned long long int var_15 = 570585020469285678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
