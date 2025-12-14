#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
unsigned long long int var_3 = 6313419698708627288ULL;
unsigned int var_5 = 2133136589U;
short var_6 = (short)-2225;
unsigned short var_10 = (unsigned short)25576;
int zero = 0;
short var_11 = (short)-32189;
short var_12 = (short)-10410;
int var_13 = -625891030;
long long int var_14 = 3421990573643175684LL;
unsigned short var_15 = (unsigned short)64314;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
