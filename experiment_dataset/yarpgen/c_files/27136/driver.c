#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2825862871U;
long long int var_16 = 3609177781988450746LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2638138194U;
int var_19 = -1009744287;
signed char var_20 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
