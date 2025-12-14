#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -946504912;
unsigned char var_9 = (unsigned char)3;
unsigned char var_12 = (unsigned char)73;
int zero = 0;
long long int var_14 = -4839452236464450154LL;
int var_15 = -247249529;
unsigned int var_16 = 2172976046U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
