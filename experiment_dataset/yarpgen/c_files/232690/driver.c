#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 721884911U;
unsigned long long int var_7 = 15810985933877504345ULL;
int var_9 = -1685157480;
unsigned long long int var_10 = 12116917797968204479ULL;
int zero = 0;
unsigned int var_14 = 1389187831U;
short var_15 = (short)-18489;
unsigned char var_16 = (unsigned char)239;
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
