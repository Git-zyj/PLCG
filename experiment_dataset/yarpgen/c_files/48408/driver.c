#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11414729619698069474ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -1899737321;
unsigned long long int var_10 = 12719597722219719719ULL;
int zero = 0;
unsigned long long int var_17 = 10557942925160729487ULL;
unsigned long long int var_18 = 2045683008437040703ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
