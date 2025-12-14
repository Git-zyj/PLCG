#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1993885476;
unsigned char var_2 = (unsigned char)163;
unsigned char var_7 = (unsigned char)51;
unsigned int var_9 = 2400642163U;
unsigned char var_10 = (unsigned char)38;
int zero = 0;
unsigned short var_11 = (unsigned short)17651;
unsigned char var_12 = (unsigned char)24;
unsigned short var_13 = (unsigned short)34032;
void init() {
}

void checksum() {
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
