#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3141258559U;
unsigned short var_2 = (unsigned short)61063;
unsigned short var_6 = (unsigned short)32313;
int zero = 0;
short var_11 = (short)-7729;
short var_12 = (short)-15097;
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
