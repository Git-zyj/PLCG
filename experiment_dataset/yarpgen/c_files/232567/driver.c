#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4410432017904317254ULL;
unsigned long long int var_3 = 13259251719704160703ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 3251040562311027318ULL;
unsigned int var_7 = 2091966641U;
int var_9 = -1969966204;
int zero = 0;
short var_11 = (short)7771;
unsigned long long int var_12 = 12769697016067239652ULL;
int var_13 = -640315576;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
