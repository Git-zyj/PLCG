#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)207;
int var_5 = -2069222026;
long long int var_8 = -5041753461697228539LL;
short var_15 = (short)13457;
int zero = 0;
unsigned int var_18 = 461287281U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-14994;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
