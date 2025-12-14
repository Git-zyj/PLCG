#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15515;
unsigned long long int var_3 = 537204149685228151ULL;
unsigned int var_6 = 2010202872U;
short var_7 = (short)-26333;
unsigned int var_8 = 1916078668U;
short var_10 = (short)32438;
int zero = 0;
unsigned int var_12 = 3630306259U;
short var_13 = (short)26780;
unsigned long long int var_14 = 13927209990200913102ULL;
unsigned long long int var_15 = 15441160406675373582ULL;
unsigned int var_16 = 2507238858U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
