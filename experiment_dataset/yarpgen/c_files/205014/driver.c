#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48458;
int var_3 = 1753243520;
long long int var_4 = -7198383146672185347LL;
short var_6 = (short)20709;
unsigned int var_9 = 2796667883U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 1897431317;
int var_12 = 765787300;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
