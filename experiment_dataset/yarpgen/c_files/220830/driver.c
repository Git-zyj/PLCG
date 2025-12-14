#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
signed char var_2 = (signed char)41;
short var_7 = (short)-24841;
unsigned char var_8 = (unsigned char)208;
unsigned char var_10 = (unsigned char)236;
int zero = 0;
unsigned char var_16 = (unsigned char)70;
short var_17 = (short)-20380;
int var_18 = -2086274610;
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
