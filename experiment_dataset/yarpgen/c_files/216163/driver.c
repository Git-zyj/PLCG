#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25573;
unsigned char var_5 = (unsigned char)81;
int var_11 = 864319182;
int var_17 = -1190820870;
int zero = 0;
int var_18 = 221211220;
unsigned int var_19 = 3826620518U;
unsigned char var_20 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
