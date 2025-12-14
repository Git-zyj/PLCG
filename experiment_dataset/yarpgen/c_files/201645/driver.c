#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
signed char var_1 = (signed char)-41;
unsigned long long int var_10 = 2942909351970822021ULL;
int var_12 = -1314540603;
int zero = 0;
unsigned char var_16 = (unsigned char)119;
unsigned int var_17 = 3029733871U;
void init() {
}

void checksum() {
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
