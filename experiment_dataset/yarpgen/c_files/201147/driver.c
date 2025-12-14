#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 557767120809062644ULL;
long long int var_13 = 5346113430568564939LL;
int zero = 0;
int var_15 = -1500569944;
long long int var_16 = -249052142070155031LL;
long long int var_17 = 153907870213162487LL;
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
