#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 242163064;
unsigned long long int var_3 = 13335144940225521280ULL;
unsigned short var_4 = (unsigned short)36848;
signed char var_6 = (signed char)95;
unsigned int var_8 = 3481774047U;
signed char var_11 = (signed char)-53;
short var_12 = (short)6462;
signed char var_13 = (signed char)112;
int var_14 = -374826195;
unsigned int var_16 = 1980408374U;
int zero = 0;
unsigned int var_20 = 4156816251U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2061394609U;
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
