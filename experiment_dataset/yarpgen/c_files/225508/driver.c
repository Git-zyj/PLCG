#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16829;
unsigned int var_2 = 2032667850U;
unsigned long long int var_3 = 14648305392787868264ULL;
unsigned int var_6 = 4242533008U;
unsigned short var_7 = (unsigned short)49098;
int zero = 0;
unsigned char var_11 = (unsigned char)20;
unsigned int var_12 = 1576427189U;
unsigned int var_13 = 3990740572U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
