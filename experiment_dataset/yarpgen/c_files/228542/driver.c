#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 15394940230293681865ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)96;
int var_20 = -1229185303;
long long int var_21 = 7188186592748917397LL;
signed char var_22 = (signed char)97;
unsigned char var_23 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
