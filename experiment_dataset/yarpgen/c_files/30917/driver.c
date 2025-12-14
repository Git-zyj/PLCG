#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_6 = 1264254425637798885ULL;
short var_7 = (short)-1614;
unsigned long long int var_9 = 12591306743954249399ULL;
long long int var_11 = 2450272124204827797LL;
unsigned short var_15 = (unsigned short)41668;
int zero = 0;
unsigned long long int var_16 = 11431119886000617604ULL;
unsigned long long int var_17 = 6911665360662362992ULL;
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
