#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29687;
unsigned char var_8 = (unsigned char)113;
signed char var_9 = (signed char)102;
int zero = 0;
unsigned short var_10 = (unsigned short)44198;
unsigned char var_11 = (unsigned char)137;
int var_12 = 1213794965;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
