#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6345765185744483531LL;
unsigned int var_8 = 2206643756U;
unsigned short var_10 = (unsigned short)33703;
int zero = 0;
short var_13 = (short)-18247;
unsigned long long int var_14 = 10313052832767571744ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
