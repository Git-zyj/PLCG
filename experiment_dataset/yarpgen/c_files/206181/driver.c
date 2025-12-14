#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
signed char var_5 = (signed char)-56;
signed char var_12 = (signed char)-94;
signed char var_13 = (signed char)-81;
int zero = 0;
signed char var_17 = (signed char)-20;
signed char var_18 = (signed char)-105;
signed char var_19 = (signed char)5;
signed char var_20 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
