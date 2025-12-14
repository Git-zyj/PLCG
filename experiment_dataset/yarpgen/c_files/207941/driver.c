#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-13620;
int var_15 = 2103378443;
int var_16 = -517178382;
long long int var_17 = 990841448885851880LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1144611106;
void init() {
}

void checksum() {
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
