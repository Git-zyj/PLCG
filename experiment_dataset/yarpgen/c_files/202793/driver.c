#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
unsigned char var_3 = (unsigned char)19;
unsigned int var_6 = 325042974U;
short var_13 = (short)12253;
int zero = 0;
short var_19 = (short)-31829;
short var_20 = (short)19149;
short var_21 = (short)-7192;
short var_22 = (short)-23069;
short var_23 = (short)27099;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
