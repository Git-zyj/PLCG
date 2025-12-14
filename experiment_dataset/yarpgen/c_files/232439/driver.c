#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32598;
unsigned int var_6 = 2787754002U;
long long int var_8 = -2789992856468907194LL;
short var_14 = (short)29660;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2590029529U;
void init() {
}

void checksum() {
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
