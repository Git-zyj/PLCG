#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59137;
short var_4 = (short)22638;
int var_5 = -1479130456;
unsigned long long int var_7 = 851696346468282883ULL;
short var_11 = (short)-21180;
int var_15 = -619517061;
int var_17 = 1448660989;
int var_18 = -221063965;
int zero = 0;
int var_20 = 706473796;
unsigned long long int var_21 = 9792708609367275676ULL;
short var_22 = (short)21743;
int var_23 = -628648862;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
