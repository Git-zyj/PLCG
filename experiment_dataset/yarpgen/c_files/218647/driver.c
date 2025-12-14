#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6804161357904919253LL;
unsigned long long int var_10 = 916849770287300778ULL;
long long int var_12 = -8905290412064850822LL;
unsigned long long int var_17 = 17451057947784541751ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)50977;
unsigned long long int var_19 = 12331855080840548401ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
