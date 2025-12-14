#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -1213039484832976512LL;
short var_4 = (short)23361;
_Bool var_5 = (_Bool)0;
short var_6 = (short)12496;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-24234;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
