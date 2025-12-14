#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9001039370928869993LL;
long long int var_13 = -5467441001954032153LL;
long long int var_15 = 4199444798046268026LL;
long long int var_19 = -589839048606905489LL;
int zero = 0;
long long int var_20 = 7983852426435624328LL;
long long int var_21 = -4192700509701323329LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
