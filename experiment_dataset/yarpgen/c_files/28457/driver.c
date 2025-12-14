#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11674;
signed char var_6 = (signed char)-64;
short var_11 = (short)-19419;
signed char var_16 = (signed char)-85;
int zero = 0;
unsigned short var_20 = (unsigned short)35435;
unsigned short var_21 = (unsigned short)43979;
signed char var_22 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
