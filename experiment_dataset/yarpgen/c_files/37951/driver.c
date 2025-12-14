#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)15255;
unsigned long long int var_8 = 17294563302813712108ULL;
unsigned long long int var_12 = 5816640418386030952ULL;
int zero = 0;
short var_14 = (short)-5443;
signed char var_15 = (signed char)37;
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
