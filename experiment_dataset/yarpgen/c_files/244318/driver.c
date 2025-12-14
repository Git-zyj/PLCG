#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21606;
short var_2 = (short)3166;
unsigned long long int var_3 = 7883217953920702982ULL;
int zero = 0;
unsigned int var_10 = 3204377282U;
unsigned short var_11 = (unsigned short)25829;
short var_12 = (short)6570;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
