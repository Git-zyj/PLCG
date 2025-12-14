#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)222;
unsigned long long int var_8 = 8672107614024655288ULL;
signed char var_14 = (signed char)-36;
int zero = 0;
int var_15 = -1628296565;
int var_16 = 1368083893;
unsigned short var_17 = (unsigned short)51318;
unsigned long long int var_18 = 1735720669814062430ULL;
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
