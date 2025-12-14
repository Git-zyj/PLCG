#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-23230;
signed char var_7 = (signed char)77;
signed char var_9 = (signed char)76;
unsigned short var_14 = (unsigned short)28850;
int zero = 0;
short var_18 = (short)21313;
unsigned short var_19 = (unsigned short)62852;
void init() {
}

void checksum() {
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
