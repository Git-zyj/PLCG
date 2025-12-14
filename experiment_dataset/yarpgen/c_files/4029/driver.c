#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1584452040U;
unsigned int var_5 = 1318603107U;
short var_6 = (short)-26527;
unsigned char var_7 = (unsigned char)99;
short var_9 = (short)-5787;
int zero = 0;
long long int var_12 = 4462919382170856236LL;
short var_13 = (short)-16341;
long long int var_14 = -6589165454388561LL;
void init() {
}

void checksum() {
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
