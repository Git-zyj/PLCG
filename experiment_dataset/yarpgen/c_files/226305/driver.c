#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned long long int var_1 = 8176682910656142951ULL;
unsigned char var_2 = (unsigned char)64;
unsigned int var_4 = 2073835833U;
unsigned int var_11 = 1539762072U;
int zero = 0;
short var_16 = (short)-15988;
short var_17 = (short)-13594;
unsigned char var_18 = (unsigned char)55;
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
