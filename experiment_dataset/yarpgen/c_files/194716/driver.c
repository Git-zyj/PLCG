#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2005723041;
short var_2 = (short)13368;
unsigned long long int var_5 = 15317408295254953540ULL;
signed char var_7 = (signed char)33;
short var_10 = (short)7316;
int zero = 0;
signed char var_12 = (signed char)-11;
long long int var_13 = 5795106344549885455LL;
unsigned long long int var_14 = 7082232159698738774ULL;
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
