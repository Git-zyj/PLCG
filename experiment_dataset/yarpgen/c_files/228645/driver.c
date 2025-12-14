#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5023436899046368380LL;
unsigned long long int var_9 = 8226957225041465086ULL;
unsigned long long int var_11 = 7186163230613023141ULL;
unsigned int var_12 = 1993639292U;
int zero = 0;
unsigned short var_14 = (unsigned short)8812;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 16194283753952195004ULL;
short var_17 = (short)17983;
void init() {
}

void checksum() {
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
