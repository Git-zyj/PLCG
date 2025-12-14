#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_10 = 7631337193732599616ULL;
int zero = 0;
long long int var_14 = 2871187143197477815LL;
unsigned short var_15 = (unsigned short)23978;
unsigned short var_16 = (unsigned short)59032;
long long int var_17 = 3788017163339285446LL;
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
