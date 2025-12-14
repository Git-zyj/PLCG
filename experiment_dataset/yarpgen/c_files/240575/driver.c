#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_9 = 16589798724912427541ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 6185133411854032535ULL;
int var_14 = -160246763;
signed char var_15 = (signed char)-108;
unsigned int var_16 = 3102025645U;
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
