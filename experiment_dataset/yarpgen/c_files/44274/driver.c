#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29108;
long long int var_3 = -8186373956345400757LL;
unsigned char var_4 = (unsigned char)218;
unsigned char var_9 = (unsigned char)65;
int zero = 0;
long long int var_13 = -2425453703991851838LL;
long long int var_14 = -5192054910428720002LL;
short var_15 = (short)-5950;
unsigned char var_16 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
