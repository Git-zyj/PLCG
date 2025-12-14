#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4098917733248484335ULL;
unsigned char var_11 = (unsigned char)15;
int zero = 0;
unsigned int var_14 = 1638036149U;
unsigned short var_15 = (unsigned short)25917;
unsigned char var_16 = (unsigned char)20;
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
