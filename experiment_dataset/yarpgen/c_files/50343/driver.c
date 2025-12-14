#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4089549562599797736LL;
_Bool var_3 = (_Bool)0;
int var_10 = -1259432853;
unsigned long long int var_11 = 4948185833203860427ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -826690802;
unsigned char var_14 = (unsigned char)144;
unsigned char var_15 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
