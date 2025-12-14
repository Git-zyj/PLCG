#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2095418031U;
short var_5 = (short)28664;
short var_7 = (short)9477;
signed char var_10 = (signed char)-3;
int zero = 0;
int var_11 = -513567275;
int var_12 = 463438171;
short var_13 = (short)-4000;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
