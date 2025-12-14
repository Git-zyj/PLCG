#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
short var_5 = (short)25437;
short var_11 = (short)-15500;
unsigned char var_16 = (unsigned char)95;
int zero = 0;
short var_18 = (short)-14832;
unsigned char var_19 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
