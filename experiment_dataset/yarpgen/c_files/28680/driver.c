#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9058;
short var_5 = (short)-69;
unsigned char var_7 = (unsigned char)238;
unsigned char var_13 = (unsigned char)111;
int zero = 0;
short var_14 = (short)-23276;
unsigned char var_15 = (unsigned char)79;
unsigned char var_16 = (unsigned char)117;
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
