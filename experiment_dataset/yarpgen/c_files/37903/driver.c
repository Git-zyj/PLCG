#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 737546297;
unsigned long long int var_3 = 2751398419254358620ULL;
unsigned int var_7 = 4234179602U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 4190400566U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
