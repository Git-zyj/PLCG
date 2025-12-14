#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8875;
signed char var_3 = (signed char)-81;
unsigned short var_5 = (unsigned short)4996;
short var_11 = (short)18463;
long long int var_16 = -8264430784230955012LL;
int zero = 0;
unsigned char var_17 = (unsigned char)56;
unsigned long long int var_18 = 10989619708119046954ULL;
short var_19 = (short)-28680;
signed char var_20 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
