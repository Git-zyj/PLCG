#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4187035943436716124LL;
unsigned int var_5 = 2168419135U;
unsigned long long int var_10 = 6444230343535719605ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_16 = -1647278;
int var_17 = -1607330116;
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
