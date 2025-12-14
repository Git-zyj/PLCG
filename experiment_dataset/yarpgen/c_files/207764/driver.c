#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)30999;
int var_5 = 1541456740;
int var_6 = -1607024457;
long long int var_9 = 4966962016165716213LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int var_17 = -2107286901;
int zero = 0;
unsigned long long int var_18 = 7319411032808162996ULL;
int var_19 = -2011400103;
unsigned long long int var_20 = 1333817357447574666ULL;
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
