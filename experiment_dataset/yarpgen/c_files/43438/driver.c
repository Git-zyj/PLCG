#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25198;
int var_2 = 558271414;
long long int var_13 = -2823951764832414105LL;
int zero = 0;
int var_20 = 2040427631;
short var_21 = (short)28953;
unsigned long long int var_22 = 5792498325565703710ULL;
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
