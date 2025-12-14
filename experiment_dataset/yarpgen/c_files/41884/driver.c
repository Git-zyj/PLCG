#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)47;
unsigned char var_10 = (unsigned char)228;
int var_12 = -791334705;
int zero = 0;
int var_14 = -2113616005;
unsigned short var_15 = (unsigned short)43711;
signed char var_16 = (signed char)-46;
signed char var_17 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
