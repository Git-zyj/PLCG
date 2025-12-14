#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1943583014U;
unsigned long long int var_6 = 9231871186622150014ULL;
long long int var_10 = 7940494636003908051LL;
unsigned short var_11 = (unsigned short)35853;
int zero = 0;
long long int var_15 = 1880888159242151818LL;
unsigned char var_16 = (unsigned char)214;
unsigned char var_17 = (unsigned char)254;
unsigned char var_18 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
