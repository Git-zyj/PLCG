#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1219731943;
unsigned int var_7 = 1282418511U;
int zero = 0;
unsigned char var_17 = (unsigned char)233;
long long int var_18 = 6430343759233678226LL;
unsigned char var_19 = (unsigned char)62;
unsigned int var_20 = 103544418U;
void init() {
}

void checksum() {
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
