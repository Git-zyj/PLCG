#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24383;
int var_3 = 1832611688;
short var_7 = (short)18199;
long long int var_10 = -5056462872562566214LL;
int zero = 0;
unsigned long long int var_17 = 8988752391334559503ULL;
int var_18 = 208739782;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
