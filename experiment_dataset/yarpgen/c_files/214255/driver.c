#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)19705;
short var_8 = (short)-24253;
int zero = 0;
unsigned short var_14 = (unsigned short)34538;
unsigned long long int var_15 = 5976972643532799612ULL;
unsigned char var_16 = (unsigned char)159;
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
