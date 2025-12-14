#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6544872735965088005ULL;
long long int var_3 = 5046427586281887131LL;
signed char var_7 = (signed char)-32;
signed char var_9 = (signed char)-103;
unsigned char var_10 = (unsigned char)187;
signed char var_11 = (signed char)-60;
unsigned short var_12 = (unsigned short)17728;
long long int var_17 = 981696786800307879LL;
int zero = 0;
unsigned char var_18 = (unsigned char)75;
unsigned short var_19 = (unsigned short)48419;
short var_20 = (short)-739;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
