#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 811306235U;
unsigned char var_4 = (unsigned char)244;
unsigned char var_5 = (unsigned char)18;
int zero = 0;
unsigned long long int var_12 = 7153925767691408251ULL;
short var_13 = (short)14040;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
