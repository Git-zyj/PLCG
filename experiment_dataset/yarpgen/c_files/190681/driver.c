#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)21994;
unsigned short var_15 = (unsigned short)43320;
unsigned int var_17 = 2253777727U;
int zero = 0;
unsigned long long int var_19 = 16692822103398427470ULL;
unsigned int var_20 = 3958820863U;
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
