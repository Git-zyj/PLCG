#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-57;
long long int var_6 = -8579552697526347796LL;
unsigned short var_9 = (unsigned short)11767;
long long int var_11 = 8160723073261275427LL;
unsigned int var_12 = 1602920900U;
unsigned short var_13 = (unsigned short)29601;
int zero = 0;
long long int var_14 = -1468626484498183168LL;
short var_15 = (short)-6397;
signed char var_16 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
