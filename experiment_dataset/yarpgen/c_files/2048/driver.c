#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2123;
signed char var_10 = (signed char)-86;
unsigned int var_12 = 633828710U;
unsigned char var_14 = (unsigned char)247;
int zero = 0;
unsigned int var_20 = 2835551629U;
signed char var_21 = (signed char)59;
signed char var_22 = (signed char)15;
unsigned int var_23 = 4227909145U;
unsigned int var_24 = 2610423525U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
