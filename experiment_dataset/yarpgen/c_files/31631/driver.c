#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned int var_3 = 2912350249U;
long long int var_10 = -1040796627399265551LL;
short var_12 = (short)26607;
signed char var_15 = (signed char)-62;
int zero = 0;
short var_16 = (short)-32;
unsigned int var_17 = 2593508566U;
long long int var_18 = -2950261291724888916LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
