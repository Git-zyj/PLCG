#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15714563077179590759ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-6639;
short var_18 = (short)-32221;
long long int var_19 = 3793879725007864768LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
