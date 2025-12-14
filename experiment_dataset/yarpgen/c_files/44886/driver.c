#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 367515522U;
unsigned long long int var_12 = 3391648018313277849ULL;
int zero = 0;
signed char var_15 = (signed char)-114;
short var_16 = (short)2191;
unsigned short var_17 = (unsigned short)64410;
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
