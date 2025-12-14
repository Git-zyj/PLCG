#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6431318304954066771LL;
signed char var_10 = (signed char)16;
unsigned long long int var_14 = 50409671109594098ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -8330182153808894330LL;
int var_17 = -950554886;
short var_18 = (short)-14527;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
