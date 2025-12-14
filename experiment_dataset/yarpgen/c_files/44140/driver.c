#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 877074919;
unsigned int var_5 = 564902926U;
signed char var_6 = (signed char)-99;
int zero = 0;
short var_10 = (short)28552;
unsigned short var_11 = (unsigned short)55498;
short var_12 = (short)17507;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
