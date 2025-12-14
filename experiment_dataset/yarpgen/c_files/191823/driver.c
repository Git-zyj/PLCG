#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_15 = 4287328436U;
short var_16 = (short)28898;
unsigned long long int var_17 = 4210280266914894766ULL;
short var_18 = (short)13583;
unsigned long long int var_19 = 9500492481003358315ULL;
unsigned short var_20 = (unsigned short)31062;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
