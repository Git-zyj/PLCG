#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1693947316;
long long int var_1 = -5776373981817231556LL;
signed char var_2 = (signed char)-82;
signed char var_3 = (signed char)17;
unsigned int var_9 = 594776055U;
long long int var_10 = 3670901244348524620LL;
unsigned char var_11 = (unsigned char)140;
int var_12 = -1778150386;
signed char var_13 = (signed char)-32;
int zero = 0;
int var_15 = -1216659506;
int var_16 = 1926140524;
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
