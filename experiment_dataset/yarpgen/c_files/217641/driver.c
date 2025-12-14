#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned int var_2 = 1876909579U;
unsigned long long int var_12 = 5133662517011163258ULL;
unsigned int var_13 = 1313742941U;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
short var_16 = (short)-29396;
long long int var_17 = -2754206892909049483LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
