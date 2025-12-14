#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)14396;
unsigned char var_9 = (unsigned char)55;
long long int var_10 = 8571764727948640012LL;
int zero = 0;
unsigned char var_15 = (unsigned char)72;
int var_16 = 987246104;
void init() {
}

void checksum() {
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
