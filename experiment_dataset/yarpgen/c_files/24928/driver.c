#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7050503530409524350ULL;
signed char var_7 = (signed char)-68;
int zero = 0;
unsigned short var_10 = (unsigned short)25074;
unsigned long long int var_11 = 1624606711785081044ULL;
unsigned char var_12 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
