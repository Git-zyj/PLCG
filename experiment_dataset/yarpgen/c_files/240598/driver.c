#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56849;
short var_11 = (short)18287;
unsigned char var_12 = (unsigned char)221;
unsigned char var_13 = (unsigned char)43;
int zero = 0;
short var_14 = (short)-13215;
unsigned long long int var_15 = 10751262480964643943ULL;
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
