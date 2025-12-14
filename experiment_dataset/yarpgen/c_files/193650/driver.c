#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -657630522;
long long int var_3 = -4733069723145433381LL;
unsigned char var_4 = (unsigned char)186;
unsigned long long int var_5 = 12498313966633733442ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)244;
unsigned char var_8 = (unsigned char)62;
int var_9 = 277028112;
int zero = 0;
short var_10 = (short)4243;
short var_11 = (short)22999;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
