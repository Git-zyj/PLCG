#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8203190698134471044ULL;
signed char var_5 = (signed char)92;
unsigned long long int var_7 = 1656322132326942210ULL;
short var_11 = (short)-17560;
unsigned short var_12 = (unsigned short)14228;
int zero = 0;
signed char var_15 = (signed char)-55;
signed char var_16 = (signed char)120;
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
