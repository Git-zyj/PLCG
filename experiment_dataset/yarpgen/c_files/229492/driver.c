#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5752290287849988810LL;
unsigned int var_1 = 2451075238U;
short var_5 = (short)-31461;
int var_8 = 197012084;
int zero = 0;
long long int var_10 = 6027833125818318244LL;
unsigned short var_11 = (unsigned short)60725;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
