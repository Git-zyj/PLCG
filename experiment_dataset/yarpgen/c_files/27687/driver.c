#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
long long int var_1 = 6590836182301007852LL;
unsigned long long int var_2 = 8207390787972244408ULL;
long long int var_5 = -8178387899624028067LL;
unsigned short var_7 = (unsigned short)18825;
unsigned char var_9 = (unsigned char)123;
unsigned int var_10 = 944649932U;
unsigned long long int var_12 = 9880074305920413596ULL;
int zero = 0;
signed char var_13 = (signed char)87;
unsigned short var_14 = (unsigned short)48616;
unsigned char var_15 = (unsigned char)173;
unsigned short var_16 = (unsigned short)53463;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
