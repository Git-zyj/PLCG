#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57777;
unsigned int var_5 = 958886769U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)16;
int zero = 0;
long long int var_12 = -8521019325699919917LL;
unsigned short var_13 = (unsigned short)48323;
long long int var_14 = -3097420121322347363LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
