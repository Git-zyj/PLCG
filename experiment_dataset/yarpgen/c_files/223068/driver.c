#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2157115599U;
unsigned char var_4 = (unsigned char)215;
int var_6 = -1685821747;
int var_7 = 1967400062;
long long int var_12 = -8876861940992697152LL;
int zero = 0;
unsigned int var_14 = 3225749998U;
int var_15 = 1809372399;
long long int var_16 = -245672248050268409LL;
short var_17 = (short)-27196;
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
