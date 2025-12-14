#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)52469;
unsigned int var_9 = 158088433U;
short var_13 = (short)-8215;
int zero = 0;
unsigned short var_14 = (unsigned short)36080;
signed char var_15 = (signed char)-61;
long long int var_16 = -6393879281726212602LL;
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
