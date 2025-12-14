#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3894608750U;
unsigned int var_9 = 698419360U;
unsigned int var_10 = 1953985673U;
unsigned int var_12 = 2860512937U;
int zero = 0;
unsigned int var_13 = 1665581510U;
unsigned int var_14 = 490131773U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
