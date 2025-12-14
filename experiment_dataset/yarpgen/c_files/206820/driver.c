#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -88509621;
int var_4 = 900442561;
short var_6 = (short)-31231;
short var_12 = (short)-8953;
int zero = 0;
unsigned short var_15 = (unsigned short)36274;
short var_16 = (short)25114;
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
