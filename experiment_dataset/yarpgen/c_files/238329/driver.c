#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)57;
unsigned long long int var_5 = 14703054280857693710ULL;
int var_7 = -2105258867;
int var_8 = -1217091606;
long long int var_10 = 4972222584125984206LL;
unsigned int var_12 = 1689693333U;
short var_13 = (short)9055;
int zero = 0;
unsigned long long int var_20 = 14280628771903146909ULL;
unsigned int var_21 = 1017647920U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
