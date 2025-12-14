#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 104475810;
unsigned char var_4 = (unsigned char)40;
unsigned char var_7 = (unsigned char)122;
unsigned char var_8 = (unsigned char)51;
unsigned long long int var_10 = 12781496306441189734ULL;
int zero = 0;
signed char var_12 = (signed char)82;
unsigned int var_13 = 4066730637U;
short var_14 = (short)-23621;
unsigned long long int var_15 = 7428490737433389419ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
