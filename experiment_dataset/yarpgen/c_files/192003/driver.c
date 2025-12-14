#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
unsigned int var_2 = 2159565504U;
unsigned char var_5 = (unsigned char)239;
unsigned short var_7 = (unsigned short)17767;
signed char var_11 = (signed char)86;
int zero = 0;
unsigned char var_14 = (unsigned char)187;
short var_15 = (short)-4742;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
