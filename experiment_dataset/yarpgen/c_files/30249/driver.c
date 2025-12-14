#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1953456198;
unsigned char var_3 = (unsigned char)53;
unsigned int var_11 = 3634488486U;
int zero = 0;
signed char var_15 = (signed char)92;
long long int var_16 = 4287798587630880027LL;
short var_17 = (short)-10075;
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
