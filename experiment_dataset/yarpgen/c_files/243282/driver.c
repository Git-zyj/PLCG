#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned int var_4 = 3795402693U;
short var_8 = (short)-28638;
unsigned long long int var_10 = 6510377970515653614ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)66;
unsigned char var_18 = (unsigned char)14;
void init() {
}

void checksum() {
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
