#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 668854314U;
short var_3 = (short)-8431;
short var_10 = (short)-4014;
signed char var_12 = (signed char)114;
unsigned char var_14 = (unsigned char)131;
int zero = 0;
unsigned char var_15 = (unsigned char)96;
short var_16 = (short)-9981;
signed char var_17 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
