#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29056;
int var_6 = -834523860;
unsigned int var_10 = 3495213380U;
unsigned short var_11 = (unsigned short)48198;
int zero = 0;
short var_13 = (short)24720;
unsigned char var_14 = (unsigned char)197;
void init() {
}

void checksum() {
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
