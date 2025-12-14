#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)162;
long long int var_13 = -1855265838625634839LL;
int zero = 0;
unsigned long long int var_14 = 1116713966987774247ULL;
long long int var_15 = -8742309080062511974LL;
unsigned int var_16 = 535561379U;
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
