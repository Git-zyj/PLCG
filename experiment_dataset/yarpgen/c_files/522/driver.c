#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1592;
unsigned short var_6 = (unsigned short)58073;
signed char var_8 = (signed char)73;
unsigned int var_12 = 3196785722U;
short var_15 = (short)-5497;
signed char var_18 = (signed char)50;
int zero = 0;
unsigned int var_19 = 2041689986U;
unsigned int var_20 = 3490200898U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
