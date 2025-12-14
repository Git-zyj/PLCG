#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 391945776U;
unsigned int var_3 = 3300962583U;
unsigned char var_5 = (unsigned char)65;
short var_7 = (short)-24127;
unsigned long long int var_8 = 18298644714941591938ULL;
unsigned int var_13 = 2087320837U;
short var_16 = (short)23188;
int zero = 0;
unsigned char var_17 = (unsigned char)189;
unsigned char var_18 = (unsigned char)160;
unsigned int var_19 = 1259071511U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
