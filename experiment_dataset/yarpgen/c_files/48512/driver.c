#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3778409729300055621ULL;
unsigned long long int var_8 = 7200790907851787841ULL;
short var_13 = (short)-397;
int zero = 0;
unsigned short var_14 = (unsigned short)60068;
long long int var_15 = -1973469828889828110LL;
int var_16 = -76715589;
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
