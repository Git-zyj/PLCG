#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15449727521881337035ULL;
unsigned int var_6 = 3855725524U;
unsigned int var_12 = 1384165409U;
unsigned char var_15 = (unsigned char)5;
int zero = 0;
unsigned int var_16 = 2506160515U;
int var_17 = -1539775217;
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
