#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1976577527;
unsigned char var_10 = (unsigned char)242;
unsigned char var_11 = (unsigned char)247;
short var_14 = (short)-20091;
int zero = 0;
signed char var_16 = (signed char)117;
unsigned long long int var_17 = 2188538431102350285ULL;
signed char var_18 = (signed char)-10;
unsigned char var_19 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
