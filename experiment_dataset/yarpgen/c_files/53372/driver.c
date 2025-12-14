#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2783189516712296452LL;
unsigned int var_8 = 2380756315U;
short var_13 = (short)-17095;
int zero = 0;
unsigned char var_14 = (unsigned char)218;
short var_15 = (short)-17899;
unsigned int var_16 = 4228500573U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
