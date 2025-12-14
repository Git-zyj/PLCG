#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)11981;
signed char var_6 = (signed char)-91;
unsigned char var_7 = (unsigned char)102;
signed char var_10 = (signed char)81;
unsigned int var_11 = 2767798543U;
int zero = 0;
short var_13 = (short)-31438;
unsigned short var_14 = (unsigned short)16513;
unsigned long long int var_15 = 10984792387802403558ULL;
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
