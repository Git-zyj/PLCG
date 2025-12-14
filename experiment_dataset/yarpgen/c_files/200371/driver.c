#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)422;
unsigned short var_7 = (unsigned short)17764;
short var_8 = (short)-15498;
unsigned char var_9 = (unsigned char)42;
long long int var_10 = 3231502833438189853LL;
unsigned long long int var_13 = 1848925582238692509ULL;
signed char var_14 = (signed char)35;
short var_15 = (short)-7731;
unsigned short var_17 = (unsigned short)37220;
signed char var_19 = (signed char)40;
int zero = 0;
unsigned char var_20 = (unsigned char)34;
unsigned short var_21 = (unsigned short)15922;
unsigned long long int var_22 = 11410729001478134313ULL;
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
