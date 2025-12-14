#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)241;
unsigned char var_5 = (unsigned char)20;
unsigned char var_8 = (unsigned char)87;
unsigned char var_10 = (unsigned char)19;
int zero = 0;
unsigned char var_11 = (unsigned char)20;
int var_12 = 105462191;
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
