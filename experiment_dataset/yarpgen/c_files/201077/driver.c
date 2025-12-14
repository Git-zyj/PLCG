#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2405889202U;
unsigned int var_3 = 1661292636U;
unsigned long long int var_7 = 16817482047546989030ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 399447734884339338ULL;
void init() {
}

void checksum() {
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
