#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_7 = -1701071007;
_Bool var_9 = (_Bool)1;
int var_10 = -1384745936;
int zero = 0;
unsigned short var_12 = (unsigned short)24940;
int var_13 = 1683548276;
int var_14 = 1433100121;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
