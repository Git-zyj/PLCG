#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
unsigned long long int var_1 = 4739288119193078785ULL;
unsigned short var_2 = (unsigned short)47884;
short var_10 = (short)9477;
unsigned int var_12 = 1061512770U;
unsigned long long int var_13 = 1850199431251118079ULL;
long long int var_14 = 8411953996642735321LL;
int zero = 0;
unsigned char var_16 = (unsigned char)94;
unsigned char var_17 = (unsigned char)157;
unsigned char var_18 = (unsigned char)33;
unsigned long long int var_19 = 3332958792019125771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
