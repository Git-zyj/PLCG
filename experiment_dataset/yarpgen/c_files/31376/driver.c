#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
signed char var_1 = (signed char)-30;
signed char var_5 = (signed char)-76;
signed char var_8 = (signed char)-67;
signed char var_10 = (signed char)-28;
int zero = 0;
signed char var_12 = (signed char)95;
signed char var_13 = (signed char)-42;
signed char var_14 = (signed char)-22;
signed char var_15 = (signed char)14;
signed char var_16 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
