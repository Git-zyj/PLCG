#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned int var_11 = 3207466718U;
short var_12 = (short)30586;
unsigned short var_18 = (unsigned short)4431;
int zero = 0;
int var_20 = -469534004;
short var_21 = (short)-14629;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
