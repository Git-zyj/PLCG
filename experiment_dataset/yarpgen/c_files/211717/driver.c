#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1292401201;
unsigned long long int var_5 = 11166951577382354367ULL;
int var_6 = -719424826;
unsigned long long int var_7 = 10114143634396377392ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)5849;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-31725;
int var_14 = -703308062;
int var_15 = -34974933;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
