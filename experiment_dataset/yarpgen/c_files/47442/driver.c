#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)11592;
int var_7 = -2115140995;
unsigned int var_8 = 209649972U;
int zero = 0;
long long int var_16 = 1412971729966773976LL;
short var_17 = (short)-22860;
signed char var_18 = (signed char)34;
signed char var_19 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
