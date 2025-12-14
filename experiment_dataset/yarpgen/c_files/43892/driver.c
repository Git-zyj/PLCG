#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1505013460;
int var_5 = 1493436034;
unsigned int var_10 = 1423855524U;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 365633510U;
long long int var_16 = 8059974189171921885LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
