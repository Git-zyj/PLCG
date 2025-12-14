#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2639173018U;
unsigned short var_3 = (unsigned short)2048;
short var_7 = (short)-3156;
int var_8 = -756530249;
int zero = 0;
short var_14 = (short)-31707;
unsigned short var_15 = (unsigned short)13638;
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
