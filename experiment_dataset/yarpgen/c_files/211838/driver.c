#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
short var_3 = (short)15361;
short var_5 = (short)-8389;
unsigned char var_7 = (unsigned char)199;
short var_15 = (short)3417;
int zero = 0;
unsigned char var_17 = (unsigned char)105;
short var_18 = (short)-26668;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
