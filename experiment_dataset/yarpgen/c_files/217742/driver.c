#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13024369302204628829ULL;
unsigned char var_3 = (unsigned char)233;
signed char var_5 = (signed char)-51;
long long int var_6 = 1793175233364301819LL;
int var_8 = -710223885;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)25084;
int var_17 = 305490237;
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
