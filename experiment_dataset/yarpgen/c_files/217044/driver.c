#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7825159774287583751LL;
unsigned int var_2 = 3761720066U;
unsigned int var_4 = 1843871710U;
short var_6 = (short)20616;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-14855;
int zero = 0;
long long int var_14 = 3344884700237549218LL;
short var_15 = (short)32119;
long long int var_16 = 5706905539151459162LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
