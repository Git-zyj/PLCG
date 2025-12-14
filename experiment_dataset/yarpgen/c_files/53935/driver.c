#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7271256430580606524LL;
int var_11 = -1944339761;
unsigned char var_15 = (unsigned char)113;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7184861735942398870LL;
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
