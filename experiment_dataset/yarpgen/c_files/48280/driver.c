#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 11586600610319794890ULL;
unsigned char var_9 = (unsigned char)128;
long long int var_13 = 2358699373022638752LL;
long long int var_14 = -1234581428085857572LL;
short var_15 = (short)-3602;
int zero = 0;
unsigned int var_16 = 1902555399U;
unsigned char var_17 = (unsigned char)74;
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
