#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)19153;
long long int var_11 = 3800759393750825212LL;
signed char var_12 = (signed char)-97;
int var_13 = -1165886541;
signed char var_15 = (signed char)31;
signed char var_16 = (signed char)73;
int zero = 0;
int var_17 = 1554570876;
short var_18 = (short)-791;
unsigned short var_19 = (unsigned short)59366;
int var_20 = -1587569118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
