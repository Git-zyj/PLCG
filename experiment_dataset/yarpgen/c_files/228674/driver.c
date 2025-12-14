#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned long long int var_1 = 196625479064964547ULL;
signed char var_5 = (signed char)90;
unsigned int var_6 = 4043302058U;
int zero = 0;
int var_10 = 1204240316;
long long int var_11 = -6092169064182415927LL;
long long int var_12 = 2052295122005518480LL;
unsigned char var_13 = (unsigned char)189;
short var_14 = (short)20707;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
