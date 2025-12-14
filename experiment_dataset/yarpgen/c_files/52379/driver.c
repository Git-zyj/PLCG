#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-52;
unsigned int var_5 = 1853066855U;
int var_6 = -1107159308;
long long int var_10 = -445747433448652170LL;
int zero = 0;
unsigned long long int var_14 = 3149243209494606085ULL;
int var_15 = -1286898254;
long long int var_16 = -6350404938642039257LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
