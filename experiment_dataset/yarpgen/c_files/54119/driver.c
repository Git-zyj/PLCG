#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23567;
long long int var_1 = -7646597323755589476LL;
signed char var_3 = (signed char)46;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)25194;
unsigned int var_9 = 319187510U;
int zero = 0;
unsigned long long int var_10 = 5551195391812208303ULL;
short var_11 = (short)84;
int var_12 = 2140130840;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
