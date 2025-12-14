#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4186555089U;
long long int var_2 = 1437181155577269543LL;
unsigned int var_4 = 783733046U;
unsigned int var_9 = 4093572450U;
unsigned int var_10 = 1371759528U;
unsigned int var_14 = 2258093191U;
long long int var_15 = -6652620369242526019LL;
long long int var_18 = -709559005020644151LL;
int zero = 0;
unsigned int var_19 = 3545822362U;
unsigned int var_20 = 847123532U;
long long int var_21 = -2299386191079411313LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
