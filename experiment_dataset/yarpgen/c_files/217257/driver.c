#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1619794308;
unsigned char var_9 = (unsigned char)241;
unsigned char var_10 = (unsigned char)145;
int zero = 0;
unsigned char var_14 = (unsigned char)182;
int var_15 = 169879472;
int var_16 = 745119085;
unsigned char var_17 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
