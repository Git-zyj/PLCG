#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17963310580293581443ULL;
int var_2 = 340837451;
short var_3 = (short)-29264;
unsigned short var_12 = (unsigned short)44494;
long long int var_16 = 5157538270126850962LL;
unsigned int var_17 = 2549021853U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1629330469U;
signed char var_22 = (signed char)46;
unsigned int var_23 = 608513541U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
