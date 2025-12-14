#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)40;
unsigned char var_8 = (unsigned char)230;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 3616734836898415068ULL;
int zero = 0;
unsigned int var_12 = 257234669U;
long long int var_13 = -8952764464898943034LL;
long long int var_14 = -4958160692256967326LL;
short var_15 = (short)31055;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
