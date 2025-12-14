#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4526489526290151008LL;
unsigned char var_5 = (unsigned char)161;
long long int var_8 = 6364588291965953904LL;
long long int var_14 = 2861516380751902662LL;
int zero = 0;
unsigned short var_16 = (unsigned short)30076;
signed char var_17 = (signed char)58;
void init() {
}

void checksum() {
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
