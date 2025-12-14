#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
signed char var_3 = (signed char)-50;
long long int var_6 = 2997405063974850160LL;
unsigned long long int var_8 = 11513543212712237443ULL;
unsigned long long int var_9 = 14462745426381137298ULL;
signed char var_11 = (signed char)126;
unsigned long long int var_12 = 716287142236610734ULL;
int zero = 0;
long long int var_14 = 7961981615646327636LL;
int var_15 = -1173303765;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
