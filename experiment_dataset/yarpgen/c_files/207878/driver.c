#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = 7757925194995461948LL;
long long int var_5 = -880131256113706197LL;
unsigned int var_6 = 2966797681U;
int var_9 = 1643904304;
int zero = 0;
signed char var_12 = (signed char)57;
unsigned int var_13 = 2465602920U;
signed char var_14 = (signed char)55;
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
