#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1859871028;
signed char var_6 = (signed char)-33;
signed char var_8 = (signed char)-80;
int var_10 = -2048883331;
unsigned int var_12 = 372778876U;
int zero = 0;
short var_16 = (short)-397;
short var_17 = (short)-3925;
unsigned char var_18 = (unsigned char)16;
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
