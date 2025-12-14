#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned char var_4 = (unsigned char)36;
long long int var_5 = 4807805234430742942LL;
int var_6 = 1813929804;
unsigned int var_7 = 2495160413U;
int var_11 = 140959741;
long long int var_13 = -2823327533369555996LL;
short var_15 = (short)-79;
unsigned int var_16 = 280048352U;
int zero = 0;
long long int var_19 = -5523856597336520975LL;
unsigned int var_20 = 348557489U;
unsigned int var_21 = 3691919758U;
void init() {
}

void checksum() {
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
