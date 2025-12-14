#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2024347695290507120ULL;
int var_6 = 1442003369;
long long int var_9 = 4848983052813334838LL;
short var_11 = (short)6151;
int zero = 0;
short var_14 = (short)9662;
unsigned short var_15 = (unsigned short)62365;
unsigned int var_16 = 439369661U;
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
