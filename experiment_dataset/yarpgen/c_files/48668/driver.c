#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)95;
short var_8 = (short)-163;
unsigned char var_10 = (unsigned char)25;
signed char var_12 = (signed char)10;
unsigned int var_13 = 1133281807U;
int zero = 0;
unsigned int var_14 = 1709293711U;
unsigned short var_15 = (unsigned short)61667;
unsigned int var_16 = 2019829292U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
