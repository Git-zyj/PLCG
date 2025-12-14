#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
unsigned char var_4 = (unsigned char)120;
int var_6 = 516421475;
unsigned char var_7 = (unsigned char)61;
short var_9 = (short)-7997;
int zero = 0;
unsigned long long int var_14 = 13566328666653165981ULL;
unsigned int var_15 = 2924886338U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
