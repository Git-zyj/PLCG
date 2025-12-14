#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12061;
unsigned long long int var_2 = 11002192543737615570ULL;
signed char var_6 = (signed char)59;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)105;
int zero = 0;
signed char var_16 = (signed char)16;
_Bool var_17 = (_Bool)1;
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
