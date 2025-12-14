#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40805;
_Bool var_2 = (_Bool)0;
long long int var_3 = -3158430027831168017LL;
unsigned short var_4 = (unsigned short)53416;
long long int var_8 = -2389249200809661603LL;
long long int var_9 = 5610882759090647206LL;
int zero = 0;
long long int var_13 = 6759461100466891872LL;
long long int var_14 = -6939178332665437059LL;
long long int var_15 = -3819503728251782380LL;
long long int var_16 = -2053879023746826432LL;
unsigned short var_17 = (unsigned short)35730;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
