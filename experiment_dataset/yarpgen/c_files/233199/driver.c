#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
unsigned long long int var_4 = 7833687789592016715ULL;
unsigned long long int var_6 = 9146857621843227808ULL;
short var_8 = (short)13259;
int zero = 0;
int var_13 = -1421385879;
int var_14 = -795869447;
unsigned int var_15 = 645077733U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
