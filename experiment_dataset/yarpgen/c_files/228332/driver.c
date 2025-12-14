#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17569469519481144146ULL;
unsigned char var_2 = (unsigned char)135;
unsigned short var_3 = (unsigned short)32771;
int zero = 0;
short var_11 = (short)4048;
short var_12 = (short)-14811;
unsigned long long int var_13 = 10730117021739876116ULL;
int var_14 = -1123947204;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
