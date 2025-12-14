#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -7346758114321392759LL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4739758160332785929ULL;
int zero = 0;
short var_16 = (short)26148;
_Bool var_17 = (_Bool)0;
long long int var_18 = 6050826011969461637LL;
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
