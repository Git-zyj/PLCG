#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)53;
unsigned int var_7 = 1411390664U;
unsigned char var_10 = (unsigned char)11;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1169803182U;
unsigned long long int var_15 = 11876868007935210463ULL;
unsigned long long int var_16 = 16355508792173306303ULL;
unsigned char var_17 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
