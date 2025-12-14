#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1725246116;
short var_4 = (short)-18029;
unsigned short var_6 = (unsigned short)20249;
short var_7 = (short)-20337;
signed char var_12 = (signed char)112;
int zero = 0;
short var_14 = (short)26206;
unsigned short var_15 = (unsigned short)61619;
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
