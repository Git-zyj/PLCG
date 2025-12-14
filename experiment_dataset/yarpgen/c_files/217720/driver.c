#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5430427029107697407LL;
unsigned long long int var_4 = 2899761790887426479ULL;
int var_6 = -495563136;
int var_10 = 941533378;
long long int var_12 = 2018673786167273908LL;
unsigned char var_13 = (unsigned char)149;
int zero = 0;
long long int var_16 = 1736230892491400993LL;
unsigned long long int var_17 = 9887928002143633598ULL;
_Bool var_18 = (_Bool)0;
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
