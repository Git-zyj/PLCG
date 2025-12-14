#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)112;
unsigned int var_10 = 3460601195U;
unsigned int var_12 = 2242392153U;
signed char var_13 = (signed char)19;
int zero = 0;
unsigned int var_16 = 422100970U;
int var_17 = 355342950;
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
