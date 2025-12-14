#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -5110087365590699451LL;
unsigned int var_17 = 3596258774U;
unsigned short var_18 = (unsigned short)9215;
int zero = 0;
unsigned char var_19 = (unsigned char)93;
long long int var_20 = -7216410723699830423LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
