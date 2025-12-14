#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned long long int var_1 = 6295551961628683375ULL;
unsigned short var_2 = (unsigned short)164;
unsigned short var_6 = (unsigned short)7301;
unsigned short var_11 = (unsigned short)4821;
int zero = 0;
unsigned short var_13 = (unsigned short)37948;
unsigned long long int var_14 = 11120968797326910386ULL;
unsigned long long int var_15 = 11538333281320253214ULL;
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
