#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11402;
int var_3 = -1043386202;
unsigned int var_5 = 22787151U;
int var_8 = 456923693;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_16 = 17331827196409671319ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)55188;
long long int var_19 = 715834072808654973LL;
unsigned long long int var_20 = 1828703010203679440ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
