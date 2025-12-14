#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9229;
long long int var_6 = 8191387813650562490LL;
unsigned int var_8 = 2922381860U;
unsigned long long int var_13 = 15488522219584449313ULL;
int var_14 = -344270629;
int zero = 0;
short var_15 = (short)-14450;
short var_16 = (short)-16196;
void init() {
}

void checksum() {
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
