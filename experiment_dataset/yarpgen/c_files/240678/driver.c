#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5976836453785315212LL;
unsigned int var_5 = 1447655936U;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)73;
int zero = 0;
unsigned long long int var_18 = 11591605726029131826ULL;
long long int var_19 = -2507849093713396824LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
