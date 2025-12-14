#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2434921898545279995ULL;
_Bool var_10 = (_Bool)1;
short var_12 = (short)6416;
int zero = 0;
unsigned int var_15 = 2083693189U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2426619121U;
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
