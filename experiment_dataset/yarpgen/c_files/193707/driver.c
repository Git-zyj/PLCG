#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24578;
unsigned char var_12 = (unsigned char)254;
int var_13 = 1101965468;
int zero = 0;
int var_15 = -660581085;
unsigned short var_16 = (unsigned short)24818;
unsigned char var_17 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
