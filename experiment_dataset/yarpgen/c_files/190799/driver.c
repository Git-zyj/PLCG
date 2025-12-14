#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
int var_3 = -312748940;
unsigned int var_4 = 224757851U;
unsigned long long int var_6 = 12061012388409995343ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)97;
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
