#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
short var_3 = (short)2771;
unsigned int var_5 = 1698111398U;
unsigned char var_6 = (unsigned char)148;
unsigned long long int var_9 = 16782681823990908549ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)35795;
unsigned int var_11 = 1900683844U;
unsigned long long int var_12 = 4000022321786379208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
