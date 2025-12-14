#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25810;
unsigned char var_3 = (unsigned char)222;
unsigned int var_5 = 370144166U;
short var_12 = (short)1125;
int zero = 0;
int var_14 = 1276535945;
signed char var_15 = (signed char)115;
signed char var_16 = (signed char)90;
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
