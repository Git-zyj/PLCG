#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
signed char var_3 = (signed char)119;
signed char var_4 = (signed char)-101;
signed char var_6 = (signed char)50;
signed char var_10 = (signed char)32;
int zero = 0;
signed char var_11 = (signed char)-22;
signed char var_12 = (signed char)-70;
signed char var_13 = (signed char)-92;
signed char var_14 = (signed char)18;
signed char var_15 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
