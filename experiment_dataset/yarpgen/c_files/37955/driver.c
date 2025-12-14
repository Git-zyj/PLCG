#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -53413370;
short var_2 = (short)-18069;
unsigned char var_4 = (unsigned char)122;
unsigned int var_6 = 4006565602U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = 9000205349872047846LL;
int var_14 = 1878376180;
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
