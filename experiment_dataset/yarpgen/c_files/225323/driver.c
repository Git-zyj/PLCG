#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2103;
signed char var_6 = (signed char)97;
unsigned int var_7 = 3409882267U;
long long int var_8 = 3442609352810233440LL;
unsigned char var_12 = (unsigned char)217;
long long int var_13 = -6062878118367686091LL;
int zero = 0;
unsigned long long int var_16 = 11056299344887716813ULL;
unsigned long long int var_17 = 17603782775164528638ULL;
unsigned int var_18 = 1647207147U;
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
