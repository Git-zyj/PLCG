#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)20046;
_Bool var_9 = (_Bool)0;
long long int var_12 = -814011401280962483LL;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)5014;
int zero = 0;
long long int var_16 = 8853870667819506079LL;
long long int var_17 = -3229768318142556222LL;
short var_18 = (short)2797;
long long int var_19 = -3594685503292432764LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
