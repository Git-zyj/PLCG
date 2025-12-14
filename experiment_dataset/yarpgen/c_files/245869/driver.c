#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2922259898U;
long long int var_3 = -7180948564833675337LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 2175447326U;
unsigned int var_11 = 13133244U;
int zero = 0;
unsigned int var_15 = 3595674052U;
long long int var_16 = 1150349872277471394LL;
unsigned int var_17 = 3144973342U;
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
