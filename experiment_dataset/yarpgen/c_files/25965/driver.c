#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4265926596U;
unsigned short var_5 = (unsigned short)24038;
unsigned long long int var_12 = 8811323514318628970ULL;
unsigned int var_13 = 15913666U;
int zero = 0;
int var_14 = -268771109;
short var_15 = (short)17039;
short var_16 = (short)19318;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
