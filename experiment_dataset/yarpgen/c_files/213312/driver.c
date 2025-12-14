#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)49456;
signed char var_4 = (signed char)-109;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 13388924517139218538ULL;
short var_15 = (short)-18923;
int zero = 0;
short var_17 = (short)-22933;
unsigned short var_18 = (unsigned short)40678;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
