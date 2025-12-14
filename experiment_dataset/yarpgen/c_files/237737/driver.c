#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-51;
signed char var_6 = (signed char)-84;
short var_7 = (short)-11609;
int var_8 = -2105168736;
unsigned short var_12 = (unsigned short)58260;
short var_15 = (short)2450;
int zero = 0;
unsigned short var_16 = (unsigned short)20063;
signed char var_17 = (signed char)126;
signed char var_18 = (signed char)-33;
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
