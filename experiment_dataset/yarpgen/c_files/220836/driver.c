#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6508115514272518866LL;
unsigned int var_7 = 322551203U;
short var_8 = (short)-12736;
int zero = 0;
short var_11 = (short)6075;
signed char var_12 = (signed char)-2;
unsigned short var_13 = (unsigned short)8267;
unsigned long long int var_14 = 10878641714778394085ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
