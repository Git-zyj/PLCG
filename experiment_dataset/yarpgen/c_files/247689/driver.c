#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9380433652172399082ULL;
unsigned int var_4 = 1446809829U;
unsigned int var_5 = 1785904142U;
int var_10 = -1039801796;
signed char var_11 = (signed char)-95;
int zero = 0;
unsigned int var_15 = 90859613U;
unsigned int var_16 = 1636016110U;
short var_17 = (short)12069;
unsigned short var_18 = (unsigned short)19472;
unsigned int var_19 = 96211305U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
