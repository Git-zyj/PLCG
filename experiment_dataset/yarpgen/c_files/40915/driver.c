#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12747;
unsigned char var_3 = (unsigned char)19;
int var_4 = 1845111774;
unsigned char var_7 = (unsigned char)31;
short var_8 = (short)16387;
unsigned long long int var_9 = 17389777983838653938ULL;
int zero = 0;
int var_11 = -108143916;
short var_12 = (short)-26922;
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
