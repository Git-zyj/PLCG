#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3188858632U;
int var_4 = 1990794814;
short var_5 = (short)-28796;
unsigned char var_6 = (unsigned char)77;
unsigned int var_8 = 2723902568U;
int zero = 0;
unsigned int var_11 = 1384966990U;
unsigned long long int var_12 = 4829158299011806525ULL;
unsigned char var_13 = (unsigned char)130;
signed char var_14 = (signed char)-83;
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
