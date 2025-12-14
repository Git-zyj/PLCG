#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2812202836094384618ULL;
unsigned long long int var_11 = 9632224276545557087ULL;
short var_12 = (short)-114;
int zero = 0;
short var_15 = (short)-17723;
short var_16 = (short)-6536;
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
