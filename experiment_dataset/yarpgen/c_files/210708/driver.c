#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned long long int var_8 = 6504894271234382559ULL;
short var_9 = (short)12094;
short var_17 = (short)2867;
signed char var_18 = (signed char)-78;
int zero = 0;
unsigned long long int var_20 = 11210195945339934458ULL;
signed char var_21 = (signed char)2;
void init() {
}

void checksum() {
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
