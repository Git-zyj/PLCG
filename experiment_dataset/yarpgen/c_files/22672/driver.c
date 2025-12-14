#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 855732898;
unsigned short var_8 = (unsigned short)64684;
_Bool var_9 = (_Bool)1;
int var_10 = 156230229;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_16 = 5242118236960968976LL;
unsigned long long int var_17 = 8878876985572635455ULL;
unsigned char var_18 = (unsigned char)231;
void init() {
}

void checksum() {
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
