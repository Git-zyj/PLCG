#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35075;
long long int var_1 = -8681953272903306797LL;
signed char var_6 = (signed char)-24;
int zero = 0;
int var_10 = -1513475233;
signed char var_11 = (signed char)-91;
signed char var_12 = (signed char)-23;
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
