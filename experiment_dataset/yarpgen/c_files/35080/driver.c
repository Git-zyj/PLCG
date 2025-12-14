#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27168;
long long int var_2 = 2255200699972715736LL;
int var_6 = 38710258;
long long int var_7 = -5015682830201225217LL;
int zero = 0;
int var_10 = 303145099;
short var_11 = (short)-4445;
long long int var_12 = -156649571144257656LL;
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
