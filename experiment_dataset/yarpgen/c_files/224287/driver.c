#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3506517265430691549LL;
long long int var_3 = -8935982094354795145LL;
unsigned char var_5 = (unsigned char)168;
unsigned int var_13 = 2026399001U;
int zero = 0;
unsigned char var_14 = (unsigned char)27;
long long int var_15 = 2651183910338128557LL;
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
