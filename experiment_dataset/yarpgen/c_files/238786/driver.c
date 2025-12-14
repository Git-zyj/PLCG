#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3033;
long long int var_3 = -5557652354362248865LL;
signed char var_8 = (signed char)67;
int zero = 0;
long long int var_11 = -3040934641601450623LL;
signed char var_12 = (signed char)-104;
void init() {
}

void checksum() {
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
