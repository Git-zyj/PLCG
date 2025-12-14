#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2070820223U;
unsigned int var_3 = 2593423725U;
long long int var_4 = -1857894176905403557LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)166;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2699659818U;
unsigned char var_12 = (unsigned char)187;
int zero = 0;
unsigned long long int var_14 = 12044895924195260915ULL;
long long int var_15 = 1840634453430873624LL;
unsigned long long int var_16 = 7411855743627982866ULL;
unsigned char var_17 = (unsigned char)234;
_Bool var_18 = (_Bool)0;
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
