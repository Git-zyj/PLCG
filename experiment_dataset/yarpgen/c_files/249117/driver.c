#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
int var_7 = 1626094567;
unsigned char var_8 = (unsigned char)39;
unsigned long long int var_11 = 10156210158506081403ULL;
int zero = 0;
unsigned int var_14 = 3119711683U;
int var_15 = -1472280227;
unsigned int var_16 = 2446296685U;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
