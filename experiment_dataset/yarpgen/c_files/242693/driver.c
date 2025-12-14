#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 671440758U;
unsigned char var_3 = (unsigned char)130;
unsigned long long int var_4 = 7470443522507354989ULL;
unsigned char var_6 = (unsigned char)42;
unsigned short var_12 = (unsigned short)27053;
int var_15 = 410565513;
signed char var_17 = (signed char)-85;
unsigned int var_19 = 2395638635U;
int zero = 0;
int var_20 = 2125295875;
unsigned long long int var_21 = 597228078856671650ULL;
int var_22 = 635816351;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
