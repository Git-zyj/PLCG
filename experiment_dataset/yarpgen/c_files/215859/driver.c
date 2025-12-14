#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
signed char var_2 = (signed char)-9;
signed char var_3 = (signed char)-19;
signed char var_9 = (signed char)-95;
signed char var_14 = (signed char)45;
signed char var_16 = (signed char)-13;
signed char var_17 = (signed char)-73;
signed char var_18 = (signed char)-94;
int zero = 0;
signed char var_20 = (signed char)-91;
signed char var_21 = (signed char)-123;
signed char var_22 = (signed char)126;
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
