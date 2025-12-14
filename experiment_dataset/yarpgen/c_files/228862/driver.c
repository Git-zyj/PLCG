#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -96121220;
int var_9 = 1867840114;
unsigned char var_10 = (unsigned char)161;
unsigned char var_11 = (unsigned char)248;
unsigned char var_14 = (unsigned char)156;
int zero = 0;
unsigned long long int var_18 = 10468906229578686726ULL;
unsigned char var_19 = (unsigned char)181;
long long int var_20 = -8060194297880331189LL;
int var_21 = -22849427;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
