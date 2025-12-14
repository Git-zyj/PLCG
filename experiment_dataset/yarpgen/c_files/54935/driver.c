#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2447667182055255363LL;
unsigned char var_1 = (unsigned char)243;
int var_3 = -1213351129;
signed char var_6 = (signed char)67;
long long int var_8 = 4433396879963289889LL;
signed char var_10 = (signed char)-11;
int zero = 0;
long long int var_17 = -5365631615197521442LL;
long long int var_18 = -1811292825445378076LL;
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
