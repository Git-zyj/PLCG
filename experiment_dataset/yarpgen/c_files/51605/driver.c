#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6336738922584322226ULL;
long long int var_5 = 8477296971720097607LL;
short var_6 = (short)-13124;
signed char var_11 = (signed char)37;
unsigned int var_13 = 2061800796U;
int zero = 0;
unsigned char var_14 = (unsigned char)223;
long long int var_15 = -4524462412241872288LL;
int var_16 = 2087947565;
void init() {
}

void checksum() {
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
