#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2224005349409459541ULL;
long long int var_3 = 2146404885728808356LL;
unsigned long long int var_6 = 7069272406655994985ULL;
int zero = 0;
long long int var_13 = 1424246929624112380LL;
signed char var_14 = (signed char)79;
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
