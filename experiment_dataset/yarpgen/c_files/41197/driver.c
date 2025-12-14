#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
unsigned char var_1 = (unsigned char)64;
signed char var_2 = (signed char)39;
long long int var_5 = 1729184883802027636LL;
int zero = 0;
signed char var_10 = (signed char)35;
int var_11 = 1797676945;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
