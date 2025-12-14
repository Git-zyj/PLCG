#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 4096355860U;
unsigned int var_12 = 511606637U;
unsigned int var_16 = 1639760927U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -504446839;
unsigned short var_20 = (unsigned short)29120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
