#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10566499985829089654ULL;
int var_4 = -383261593;
short var_12 = (short)-23495;
int zero = 0;
unsigned char var_15 = (unsigned char)42;
long long int var_16 = 7181327136584099219LL;
long long int var_17 = 8692752195470050525LL;
void init() {
}

void checksum() {
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
