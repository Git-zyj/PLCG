#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2952647194303687737LL;
unsigned char var_7 = (unsigned char)67;
int zero = 0;
long long int var_15 = 1476092062143928392LL;
short var_16 = (short)-32499;
long long int var_17 = -4108827998269883849LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
