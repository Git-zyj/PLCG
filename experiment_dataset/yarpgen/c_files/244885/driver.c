#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)8182;
unsigned int var_10 = 498798540U;
long long int var_13 = 3859954862602490068LL;
signed char var_14 = (signed char)-22;
signed char var_17 = (signed char)-36;
int zero = 0;
int var_19 = 2128319038;
unsigned char var_20 = (unsigned char)26;
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
