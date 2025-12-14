#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2370692392U;
signed char var_7 = (signed char)-4;
int var_10 = 1605161111;
short var_11 = (short)17071;
unsigned long long int var_13 = 8556947650518925046ULL;
int zero = 0;
int var_18 = 1538540601;
unsigned int var_19 = 1905757692U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
