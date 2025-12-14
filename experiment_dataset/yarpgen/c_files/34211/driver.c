#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3087212515U;
short var_2 = (short)-29480;
unsigned short var_5 = (unsigned short)41131;
unsigned short var_8 = (unsigned short)61488;
unsigned int var_14 = 4004885990U;
int zero = 0;
unsigned char var_15 = (unsigned char)86;
long long int var_16 = -8352531869094248046LL;
void init() {
}

void checksum() {
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
