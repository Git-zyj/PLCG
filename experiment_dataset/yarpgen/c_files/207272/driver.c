#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7970090413228794588ULL;
unsigned int var_12 = 1785855530U;
unsigned long long int var_13 = 14331600967480462045ULL;
int zero = 0;
short var_16 = (short)-553;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 494955999U;
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
