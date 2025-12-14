#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -920153846;
unsigned int var_5 = 2277538249U;
long long int var_15 = -5142100490592909614LL;
int zero = 0;
unsigned short var_17 = (unsigned short)65238;
unsigned int var_18 = 2976632403U;
void init() {
}

void checksum() {
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
