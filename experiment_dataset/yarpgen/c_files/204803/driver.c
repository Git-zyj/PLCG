#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5621176765162603259ULL;
unsigned long long int var_11 = 14278082878562131814ULL;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
long long int var_18 = -7845958040083337449LL;
long long int var_19 = -493757025729662636LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
