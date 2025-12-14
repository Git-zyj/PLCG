#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8226911716258254762LL;
int var_8 = 1697969193;
_Bool var_10 = (_Bool)1;
int var_14 = -1033130559;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
long long int var_20 = 3759533494403901447LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
