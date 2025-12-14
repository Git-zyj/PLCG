#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-119;
signed char var_9 = (signed char)-61;
short var_10 = (short)11862;
short var_11 = (short)-20424;
int zero = 0;
signed char var_14 = (signed char)97;
short var_15 = (short)-538;
signed char var_16 = (signed char)0;
void init() {
}

void checksum() {
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
