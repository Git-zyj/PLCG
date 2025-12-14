#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1617140157963389868LL;
unsigned int var_6 = 1832031755U;
long long int var_7 = -8019704158964124390LL;
unsigned int var_9 = 1424566691U;
signed char var_10 = (signed char)-52;
long long int var_11 = -184505415648367884LL;
long long int var_14 = 2114353746936298056LL;
int zero = 0;
long long int var_20 = 3679288461772902600LL;
long long int var_21 = -3627509099022136946LL;
unsigned char var_22 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
