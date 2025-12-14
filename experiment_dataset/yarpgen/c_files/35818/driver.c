#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10322852407692949624ULL;
unsigned int var_1 = 2526249467U;
long long int var_5 = 4709238051133987376LL;
signed char var_9 = (signed char)-42;
int zero = 0;
int var_16 = -407897372;
unsigned int var_17 = 1320038106U;
signed char var_18 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
