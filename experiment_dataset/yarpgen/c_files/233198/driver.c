#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49740;
short var_11 = (short)26554;
signed char var_13 = (signed char)-67;
int zero = 0;
unsigned short var_20 = (unsigned short)45185;
unsigned long long int var_21 = 1742426226959153725ULL;
signed char var_22 = (signed char)125;
unsigned long long int var_23 = 15654989218341170157ULL;
short var_24 = (short)18714;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
