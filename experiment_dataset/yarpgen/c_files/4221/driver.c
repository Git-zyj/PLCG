#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned short var_2 = (unsigned short)50578;
unsigned char var_9 = (unsigned char)139;
unsigned char var_14 = (unsigned char)32;
int zero = 0;
unsigned short var_16 = (unsigned short)39346;
unsigned char var_17 = (unsigned char)73;
unsigned char var_18 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
