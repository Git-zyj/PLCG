#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2063668900;
unsigned char var_5 = (unsigned char)50;
short var_6 = (short)-10001;
unsigned int var_7 = 1550791388U;
unsigned long long int var_16 = 6136936921962508976ULL;
int zero = 0;
long long int var_17 = -2426496628576877990LL;
int var_18 = 1078662714;
int var_19 = -916642212;
unsigned int var_20 = 3185756854U;
unsigned short var_21 = (unsigned short)4014;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
