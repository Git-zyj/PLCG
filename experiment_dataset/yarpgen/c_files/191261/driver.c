#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2232083715U;
unsigned char var_2 = (unsigned char)253;
int zero = 0;
short var_10 = (short)-17314;
unsigned char var_11 = (unsigned char)251;
unsigned char var_12 = (unsigned char)91;
unsigned int var_13 = 1828097889U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
