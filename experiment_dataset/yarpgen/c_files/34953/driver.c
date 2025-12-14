#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29841;
long long int var_4 = 715566502968449820LL;
int var_10 = -2009374039;
int var_11 = -66386404;
int var_13 = 1869857676;
int zero = 0;
long long int var_14 = -7254949629675035899LL;
int var_15 = -1553387882;
long long int var_16 = 6091463061895492619LL;
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
