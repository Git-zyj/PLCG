#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14413;
short var_4 = (short)-30119;
short var_6 = (short)4629;
signed char var_7 = (signed char)29;
int zero = 0;
unsigned short var_10 = (unsigned short)28861;
long long int var_11 = 45315319217636671LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
