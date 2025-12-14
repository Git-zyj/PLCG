#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)81;
signed char var_4 = (signed char)-16;
unsigned long long int var_6 = 13107007532912349986ULL;
unsigned int var_11 = 2982916320U;
int var_12 = 1097779369;
int zero = 0;
signed char var_15 = (signed char)-16;
unsigned char var_16 = (unsigned char)190;
short var_17 = (short)-579;
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
