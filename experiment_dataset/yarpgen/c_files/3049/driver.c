#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2813553507U;
unsigned int var_11 = 416289666U;
int var_13 = -654862777;
int zero = 0;
unsigned short var_16 = (unsigned short)65249;
short var_17 = (short)32575;
int var_18 = 2087890717;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
