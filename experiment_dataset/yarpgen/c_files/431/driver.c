#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 893229447;
unsigned int var_7 = 4219287361U;
int var_14 = -1894175688;
int zero = 0;
int var_15 = -1527687448;
long long int var_16 = 85374147659151259LL;
unsigned int var_17 = 2683958678U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
