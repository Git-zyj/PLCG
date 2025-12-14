#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3509256086U;
unsigned long long int var_3 = 10967563251590931089ULL;
short var_7 = (short)-27990;
unsigned long long int var_12 = 2154299399885077787ULL;
signed char var_13 = (signed char)95;
int zero = 0;
unsigned long long int var_14 = 2577192131867561095ULL;
short var_15 = (short)27997;
unsigned int var_16 = 581236313U;
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
