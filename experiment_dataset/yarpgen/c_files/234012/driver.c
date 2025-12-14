#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2842594814U;
short var_3 = (short)-30707;
_Bool var_4 = (_Bool)0;
int var_7 = -1951029052;
short var_11 = (short)-23913;
long long int var_15 = 2016594468490496905LL;
int zero = 0;
unsigned long long int var_17 = 11440925981923535663ULL;
unsigned char var_18 = (unsigned char)196;
short var_19 = (short)19210;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
