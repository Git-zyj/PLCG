#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2107131689;
signed char var_5 = (signed char)-17;
short var_6 = (short)-14584;
unsigned short var_9 = (unsigned short)59969;
int var_10 = 308285516;
int zero = 0;
unsigned char var_13 = (unsigned char)75;
unsigned char var_14 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
