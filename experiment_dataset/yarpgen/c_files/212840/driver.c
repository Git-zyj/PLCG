#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
signed char var_8 = (signed char)-35;
signed char var_10 = (signed char)29;
signed char var_14 = (signed char)-87;
signed char var_15 = (signed char)-106;
int zero = 0;
signed char var_17 = (signed char)111;
signed char var_18 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
