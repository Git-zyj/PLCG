#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)70;
unsigned int var_5 = 2976927691U;
unsigned int var_8 = 2832093184U;
short var_11 = (short)-6253;
int zero = 0;
long long int var_15 = -5122318167855151853LL;
unsigned long long int var_16 = 16560676965313317049ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
