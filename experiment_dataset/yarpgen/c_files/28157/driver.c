#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3396200732U;
unsigned long long int var_17 = 8030339607137728333ULL;
signed char var_18 = (signed char)109;
int zero = 0;
unsigned short var_19 = (unsigned short)7682;
unsigned int var_20 = 1637466982U;
void init() {
}

void checksum() {
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
