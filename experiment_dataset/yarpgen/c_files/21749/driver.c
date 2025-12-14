#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1142858676U;
unsigned char var_5 = (unsigned char)175;
signed char var_6 = (signed char)-124;
unsigned short var_7 = (unsigned short)64318;
unsigned int var_14 = 3302947488U;
unsigned short var_15 = (unsigned short)6045;
int zero = 0;
unsigned int var_16 = 2628455785U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3642923068278022928LL;
signed char var_19 = (signed char)-116;
void init() {
}

void checksum() {
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
