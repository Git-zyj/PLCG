#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29718;
unsigned int var_1 = 4186058334U;
unsigned short var_3 = (unsigned short)38171;
short var_8 = (short)4530;
unsigned int var_12 = 917144212U;
int zero = 0;
unsigned short var_13 = (unsigned short)64121;
short var_14 = (short)28482;
unsigned short var_15 = (unsigned short)59980;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
