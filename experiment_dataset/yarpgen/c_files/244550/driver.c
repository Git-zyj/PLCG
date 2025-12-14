#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8162557791248542771ULL;
unsigned char var_8 = (unsigned char)86;
unsigned long long int var_9 = 5096976183719635942ULL;
unsigned int var_10 = 325930320U;
unsigned int var_12 = 1919888345U;
int zero = 0;
unsigned int var_15 = 3028838294U;
unsigned char var_16 = (unsigned char)231;
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
