#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8729188607179537475ULL;
unsigned char var_2 = (unsigned char)214;
unsigned char var_3 = (unsigned char)141;
long long int var_4 = 3141459276347622497LL;
unsigned int var_8 = 2281076646U;
unsigned int var_9 = 2173360487U;
long long int var_10 = 7562065006552814316LL;
short var_12 = (short)-25381;
int zero = 0;
unsigned int var_14 = 3777403111U;
long long int var_15 = -6909012894888936686LL;
long long int var_16 = -3689284617714557604LL;
short var_17 = (short)23932;
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
