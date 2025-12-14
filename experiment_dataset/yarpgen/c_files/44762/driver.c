#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
signed char var_6 = (signed char)88;
signed char var_7 = (signed char)66;
int zero = 0;
signed char var_10 = (signed char)-20;
signed char var_11 = (signed char)-53;
signed char var_12 = (signed char)88;
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
