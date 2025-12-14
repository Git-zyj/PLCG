#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15309741449587494692ULL;
unsigned char var_6 = (unsigned char)26;
unsigned int var_11 = 3658478009U;
unsigned long long int var_12 = 2272170139973270770ULL;
int zero = 0;
int var_14 = 1689167750;
unsigned char var_15 = (unsigned char)73;
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
