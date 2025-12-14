#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15025005412000934269ULL;
signed char var_6 = (signed char)59;
unsigned long long int var_10 = 11140986440377328492ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 16527477620029268128ULL;
int var_16 = 74670413;
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
