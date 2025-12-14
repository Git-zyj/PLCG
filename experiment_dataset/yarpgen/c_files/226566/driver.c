#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 10261764720412480342ULL;
int var_6 = -775262872;
long long int var_7 = 9125161647452373917LL;
signed char var_8 = (signed char)-89;
int zero = 0;
short var_10 = (short)5057;
unsigned long long int var_11 = 11851365256126456964ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
