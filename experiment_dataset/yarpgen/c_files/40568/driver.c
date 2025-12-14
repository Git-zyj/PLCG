#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1550211034623267781LL;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 1294187743U;
int zero = 0;
unsigned short var_16 = (unsigned short)11639;
long long int var_17 = -880926030068385568LL;
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
