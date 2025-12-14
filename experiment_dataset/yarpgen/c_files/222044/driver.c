#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned char var_2 = (unsigned char)55;
signed char var_3 = (signed char)6;
unsigned short var_11 = (unsigned short)55445;
unsigned long long int var_12 = 14311310548234889079ULL;
unsigned int var_13 = 729501057U;
int zero = 0;
short var_14 = (short)-28152;
unsigned int var_15 = 3275964287U;
void init() {
}

void checksum() {
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
