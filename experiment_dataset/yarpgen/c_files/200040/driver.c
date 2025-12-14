#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2504125395U;
signed char var_1 = (signed char)-80;
unsigned long long int var_6 = 1024611746778976614ULL;
signed char var_7 = (signed char)-71;
int var_12 = -2071713180;
int zero = 0;
unsigned short var_17 = (unsigned short)64725;
unsigned long long int var_18 = 16253588616015539659ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
