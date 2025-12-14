#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2966989544U;
long long int var_2 = -6299337657523462240LL;
unsigned short var_6 = (unsigned short)38852;
int zero = 0;
long long int var_12 = -2882972515223661450LL;
short var_13 = (short)-2906;
unsigned int var_14 = 3802988769U;
long long int var_15 = -9134152828720939462LL;
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
