#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3705843802U;
unsigned int var_3 = 1999226121U;
unsigned int var_7 = 1454336710U;
long long int var_9 = 8292010608972692499LL;
unsigned long long int var_16 = 15318940647889688991ULL;
int zero = 0;
long long int var_18 = -8035317575055561323LL;
short var_19 = (short)21086;
void init() {
}

void checksum() {
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
