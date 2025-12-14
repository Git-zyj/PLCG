#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
short var_1 = (short)14469;
unsigned short var_2 = (unsigned short)12097;
int var_4 = 380600951;
short var_10 = (short)-11440;
int zero = 0;
unsigned short var_11 = (unsigned short)5378;
unsigned long long int var_12 = 14874435435313485739ULL;
unsigned int var_13 = 819859026U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
