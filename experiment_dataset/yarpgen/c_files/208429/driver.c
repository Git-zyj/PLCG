#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
int var_2 = 2081709405;
int var_13 = -1056323315;
long long int var_19 = -8032245672215249419LL;
int zero = 0;
long long int var_20 = 821340059588779367LL;
int var_21 = 1606423391;
int var_22 = 2045112038;
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
