#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)37;
unsigned short var_7 = (unsigned short)30027;
int var_12 = -1762787678;
long long int var_13 = -2883126158153681801LL;
int zero = 0;
short var_18 = (short)24875;
unsigned int var_19 = 1809700824U;
signed char var_20 = (signed char)8;
void init() {
}

void checksum() {
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
