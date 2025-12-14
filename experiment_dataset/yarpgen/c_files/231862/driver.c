#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4191012343U;
signed char var_8 = (signed char)76;
short var_16 = (short)-10029;
int zero = 0;
short var_18 = (short)23705;
short var_19 = (short)-157;
int var_20 = 506174681;
long long int var_21 = -8769310695176999282LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
