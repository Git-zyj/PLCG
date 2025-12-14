#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)148;
unsigned char var_5 = (unsigned char)195;
unsigned char var_7 = (unsigned char)178;
unsigned char var_9 = (unsigned char)139;
int zero = 0;
unsigned char var_15 = (unsigned char)218;
unsigned char var_16 = (unsigned char)168;
unsigned char var_17 = (unsigned char)87;
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
