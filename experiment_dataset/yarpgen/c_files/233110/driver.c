#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16075;
short var_1 = (short)13556;
unsigned char var_8 = (unsigned char)42;
signed char var_12 = (signed char)-94;
int zero = 0;
unsigned long long int var_13 = 1186992677990059790ULL;
unsigned short var_14 = (unsigned short)7822;
int var_15 = 601110625;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
