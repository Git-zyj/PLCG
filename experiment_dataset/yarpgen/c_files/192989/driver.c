#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5721;
unsigned long long int var_1 = 12094156666769461527ULL;
unsigned int var_2 = 739382833U;
signed char var_5 = (signed char)-12;
short var_6 = (short)-22438;
long long int var_7 = -4971708732167257515LL;
unsigned char var_8 = (unsigned char)208;
int zero = 0;
int var_11 = -52638563;
signed char var_12 = (signed char)86;
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
