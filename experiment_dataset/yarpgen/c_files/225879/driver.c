#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61909;
unsigned short var_3 = (unsigned short)41161;
signed char var_4 = (signed char)-119;
signed char var_5 = (signed char)-86;
int zero = 0;
signed char var_11 = (signed char)68;
unsigned long long int var_12 = 16062837505577720323ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
