#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10904689589473247979ULL;
unsigned int var_11 = 3195138132U;
int zero = 0;
signed char var_14 = (signed char)-104;
unsigned int var_15 = 3759636409U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1004836199U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
