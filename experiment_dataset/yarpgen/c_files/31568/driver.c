#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18014;
unsigned char var_3 = (unsigned char)132;
unsigned long long int var_8 = 3404785015557243390ULL;
short var_11 = (short)-8915;
int zero = 0;
short var_13 = (short)-24687;
int var_14 = -774683240;
unsigned char var_15 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
