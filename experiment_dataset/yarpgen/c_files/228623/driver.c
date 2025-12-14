#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 415178804;
_Bool var_6 = (_Bool)0;
long long int var_10 = 1915209212422616957LL;
unsigned char var_11 = (unsigned char)28;
unsigned long long int var_12 = 13906759528820386480ULL;
int zero = 0;
unsigned int var_14 = 2051215165U;
unsigned short var_15 = (unsigned short)16889;
signed char var_16 = (signed char)115;
unsigned long long int var_17 = 13831467180529912016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
