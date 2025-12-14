#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8060254753211551062LL;
unsigned short var_3 = (unsigned short)56545;
signed char var_5 = (signed char)41;
unsigned char var_7 = (unsigned char)126;
long long int var_8 = 7541789083230508536LL;
int zero = 0;
unsigned short var_10 = (unsigned short)7661;
long long int var_11 = -374659496125124116LL;
long long int var_12 = -2456427613636690481LL;
unsigned char var_13 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
