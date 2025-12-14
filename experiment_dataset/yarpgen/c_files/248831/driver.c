#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7258996414556042792LL;
long long int var_7 = 1991028027052678907LL;
long long int var_8 = -8573534304074515474LL;
long long int var_10 = 3179407002731180078LL;
int zero = 0;
long long int var_11 = -2559853857742013562LL;
long long int var_12 = 6341221742391555360LL;
long long int var_13 = -2914439919046260551LL;
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
