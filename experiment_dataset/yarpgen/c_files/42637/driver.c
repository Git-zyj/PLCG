#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1765053544;
unsigned long long int var_5 = 4750509714432594390ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 663781385536012256LL;
unsigned long long int var_15 = 17537699619039833646ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)112;
int var_17 = -1424908314;
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
