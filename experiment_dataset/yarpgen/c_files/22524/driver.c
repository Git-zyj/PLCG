#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 510048268U;
unsigned long long int var_14 = 1815362295841790800ULL;
int var_15 = 1170976276;
int var_18 = 366784156;
int zero = 0;
unsigned long long int var_20 = 15228494657135252783ULL;
int var_21 = 787332769;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
