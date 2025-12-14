#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5024424348252854781LL;
unsigned short var_2 = (unsigned short)61025;
unsigned int var_4 = 438154533U;
long long int var_5 = -2970015112456406027LL;
signed char var_6 = (signed char)-55;
unsigned long long int var_7 = 13341619061278401099ULL;
signed char var_8 = (signed char)-7;
int zero = 0;
unsigned short var_12 = (unsigned short)6641;
unsigned int var_13 = 1146142462U;
unsigned long long int var_14 = 7688219872164515014ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
