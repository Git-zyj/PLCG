#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3293764511U;
unsigned short var_11 = (unsigned short)27011;
int zero = 0;
unsigned int var_16 = 162562084U;
unsigned short var_17 = (unsigned short)43877;
unsigned int var_18 = 1990509563U;
int var_19 = -90337531;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
