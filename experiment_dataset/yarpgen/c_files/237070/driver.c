#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14294354579086183590ULL;
int var_6 = 108724301;
long long int var_7 = -4694872393364397497LL;
long long int var_8 = -3835624183051868302LL;
short var_9 = (short)-4020;
signed char var_10 = (signed char)83;
int zero = 0;
int var_11 = 1445565721;
signed char var_12 = (signed char)17;
unsigned char var_13 = (unsigned char)133;
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
