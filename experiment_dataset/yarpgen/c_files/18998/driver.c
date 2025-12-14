#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-18041;
int var_5 = -1260446193;
unsigned short var_13 = (unsigned short)21178;
short var_15 = (short)-19920;
int zero = 0;
long long int var_18 = -4568248475850475496LL;
unsigned int var_19 = 1424103628U;
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
