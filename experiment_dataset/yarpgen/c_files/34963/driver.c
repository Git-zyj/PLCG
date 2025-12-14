#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 420531481U;
signed char var_4 = (signed char)10;
unsigned char var_5 = (unsigned char)206;
unsigned long long int var_6 = 1979805633908443513ULL;
int zero = 0;
short var_11 = (short)4859;
unsigned char var_12 = (unsigned char)26;
void init() {
}

void checksum() {
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
