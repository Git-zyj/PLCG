#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)61;
short var_3 = (short)1385;
signed char var_4 = (signed char)25;
signed char var_6 = (signed char)55;
long long int var_7 = -6232619888136100068LL;
int zero = 0;
signed char var_12 = (signed char)-111;
signed char var_13 = (signed char)90;
signed char var_14 = (signed char)102;
short var_15 = (short)-16203;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
