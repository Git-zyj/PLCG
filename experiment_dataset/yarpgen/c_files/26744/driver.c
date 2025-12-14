#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-17414;
unsigned char var_9 = (unsigned char)66;
int var_10 = 167512304;
unsigned int var_12 = 1383862616U;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
short var_19 = (short)-6744;
unsigned int var_20 = 197445382U;
short var_21 = (short)-6790;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
