#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1192405831U;
unsigned long long int var_8 = 9127912994968438701ULL;
long long int var_10 = 2755953119865023747LL;
unsigned long long int var_11 = 4895591581216206810ULL;
signed char var_17 = (signed char)-15;
int zero = 0;
unsigned int var_18 = 2251333614U;
unsigned int var_19 = 783661449U;
unsigned int var_20 = 1804925205U;
signed char var_21 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
