#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30392;
unsigned short var_3 = (unsigned short)26092;
int var_4 = 164350123;
int var_6 = -1575509607;
int zero = 0;
long long int var_10 = -320340930766831059LL;
signed char var_11 = (signed char)83;
unsigned char var_12 = (unsigned char)42;
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
