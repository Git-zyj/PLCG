#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -486443015;
signed char var_1 = (signed char)120;
unsigned long long int var_4 = 2716795174893910591ULL;
signed char var_8 = (signed char)2;
short var_9 = (short)17205;
int zero = 0;
short var_10 = (short)-3194;
unsigned char var_11 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
