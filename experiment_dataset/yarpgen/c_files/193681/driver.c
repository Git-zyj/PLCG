#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)175;
int var_10 = 469097525;
long long int var_11 = -7108485879580084177LL;
int zero = 0;
long long int var_15 = 9203439355689073477LL;
int var_16 = -1483465126;
unsigned char var_17 = (unsigned char)229;
unsigned long long int var_18 = 17558124963256504277ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
