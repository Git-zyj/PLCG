#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
unsigned char var_3 = (unsigned char)253;
unsigned int var_4 = 427516388U;
signed char var_6 = (signed char)62;
unsigned int var_7 = 1216716826U;
unsigned char var_13 = (unsigned char)237;
unsigned int var_15 = 2176466971U;
int zero = 0;
short var_17 = (short)-11950;
short var_18 = (short)-8264;
unsigned int var_19 = 269077099U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
