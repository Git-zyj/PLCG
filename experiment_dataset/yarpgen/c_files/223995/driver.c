#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)110;
unsigned int var_4 = 2136678992U;
long long int var_8 = -8156951507375345627LL;
short var_11 = (short)-25244;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -7022165207253256864LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
