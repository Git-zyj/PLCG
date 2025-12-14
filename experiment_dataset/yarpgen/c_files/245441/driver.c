#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)28290;
unsigned long long int var_7 = 9830336943662120614ULL;
unsigned long long int var_13 = 8197036084329148908ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)131;
int zero = 0;
unsigned short var_17 = (unsigned short)20762;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
