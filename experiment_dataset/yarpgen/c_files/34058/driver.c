#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -94669205;
signed char var_6 = (signed char)-13;
unsigned short var_10 = (unsigned short)11769;
unsigned char var_12 = (unsigned char)39;
int zero = 0;
signed char var_16 = (signed char)-83;
unsigned char var_17 = (unsigned char)85;
unsigned char var_18 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
