#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1850177228;
short var_2 = (short)-22080;
int var_3 = -310720479;
signed char var_5 = (signed char)42;
unsigned short var_7 = (unsigned short)52450;
signed char var_9 = (signed char)45;
int zero = 0;
long long int var_10 = -7174789187575686267LL;
long long int var_11 = -6123373414769816167LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
