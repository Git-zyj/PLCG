#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)91;
unsigned int var_3 = 2272756009U;
unsigned int var_6 = 285708578U;
long long int var_7 = 1592738862419477746LL;
short var_8 = (short)9281;
long long int var_9 = -8296897629909514717LL;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned int var_12 = 3218726497U;
long long int var_13 = -5474277889595989021LL;
void init() {
}

void checksum() {
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
