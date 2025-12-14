#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2123236570;
unsigned int var_9 = 1953790638U;
unsigned long long int var_11 = 13212762546305824877ULL;
unsigned long long int var_14 = 18434891939496840427ULL;
int zero = 0;
int var_16 = 1217143386;
unsigned int var_17 = 871702118U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
