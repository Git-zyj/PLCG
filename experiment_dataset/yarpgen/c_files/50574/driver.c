#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1222923661;
short var_3 = (short)-28423;
int zero = 0;
unsigned short var_10 = (unsigned short)52301;
unsigned long long int var_11 = 15946927371699197875ULL;
unsigned char var_12 = (unsigned char)10;
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
