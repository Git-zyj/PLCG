#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 283616365;
short var_1 = (short)-8410;
unsigned short var_10 = (unsigned short)10501;
int zero = 0;
unsigned long long int var_12 = 4358197266072123552ULL;
unsigned short var_13 = (unsigned short)53261;
short var_14 = (short)-30350;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
