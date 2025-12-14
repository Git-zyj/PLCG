#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1266976966;
short var_9 = (short)26510;
long long int var_12 = 1321755214083467398LL;
long long int var_13 = -5031479434139268609LL;
int zero = 0;
short var_14 = (short)-18366;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3447635185557969966LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
