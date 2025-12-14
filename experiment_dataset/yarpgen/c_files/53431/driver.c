#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
int var_1 = 47865439;
int var_5 = -674198231;
unsigned char var_14 = (unsigned char)59;
int zero = 0;
unsigned int var_16 = 4222922678U;
unsigned int var_17 = 2680392278U;
unsigned int var_18 = 1526054126U;
int var_19 = -888176593;
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
