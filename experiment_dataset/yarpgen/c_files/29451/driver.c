#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6144;
signed char var_10 = (signed char)-86;
unsigned char var_15 = (unsigned char)73;
int zero = 0;
signed char var_18 = (signed char)0;
signed char var_19 = (signed char)90;
signed char var_20 = (signed char)16;
unsigned int var_21 = 3964483930U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
