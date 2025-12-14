#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
signed char var_1 = (signed char)99;
unsigned short var_7 = (unsigned short)9805;
int var_12 = -335365684;
int zero = 0;
unsigned char var_13 = (unsigned char)85;
long long int var_14 = 9172645675774050782LL;
long long int var_15 = 987247737164500177LL;
long long int var_16 = 3951037702582317221LL;
long long int var_17 = -7784598649328664255LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
