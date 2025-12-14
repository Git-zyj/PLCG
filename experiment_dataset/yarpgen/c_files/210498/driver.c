#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)208;
unsigned int var_11 = 1050876681U;
long long int var_13 = -768138760479438569LL;
int var_14 = -240551117;
int zero = 0;
unsigned long long int var_16 = 6605855883312620851ULL;
unsigned short var_17 = (unsigned short)31421;
void init() {
}

void checksum() {
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
