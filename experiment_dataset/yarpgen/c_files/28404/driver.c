#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1237151833;
unsigned long long int var_4 = 9613054468808422398ULL;
signed char var_7 = (signed char)4;
signed char var_10 = (signed char)82;
int zero = 0;
unsigned long long int var_14 = 1542422032649179191ULL;
short var_15 = (short)-6709;
signed char var_16 = (signed char)5;
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
