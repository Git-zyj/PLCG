#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)84;
unsigned long long int var_5 = 6156791207324383264ULL;
short var_13 = (short)14025;
short var_17 = (short)-19226;
int zero = 0;
unsigned short var_19 = (unsigned short)45939;
int var_20 = -1303446401;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
