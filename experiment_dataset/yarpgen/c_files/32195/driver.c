#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
signed char var_5 = (signed char)-101;
unsigned long long int var_6 = 14703965848100100329ULL;
signed char var_7 = (signed char)-29;
unsigned long long int var_8 = 18084538627145505102ULL;
unsigned int var_9 = 524531399U;
int zero = 0;
long long int var_10 = 8843777795700487930LL;
signed char var_11 = (signed char)-105;
unsigned int var_12 = 2943207799U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
