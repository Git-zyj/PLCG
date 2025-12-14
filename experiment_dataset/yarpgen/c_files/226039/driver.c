#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -796470830;
short var_6 = (short)-18886;
unsigned long long int var_7 = 8796903911669813950ULL;
_Bool var_14 = (_Bool)0;
int var_16 = 1502677364;
int zero = 0;
int var_18 = 1444696457;
_Bool var_19 = (_Bool)1;
short var_20 = (short)3826;
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
