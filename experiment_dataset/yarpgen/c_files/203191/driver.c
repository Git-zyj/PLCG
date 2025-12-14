#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3424075993U;
unsigned int var_3 = 1476119209U;
unsigned int var_7 = 445856347U;
int var_8 = -1595319956;
unsigned char var_9 = (unsigned char)242;
unsigned char var_10 = (unsigned char)146;
unsigned short var_11 = (unsigned short)36913;
_Bool var_12 = (_Bool)1;
int var_13 = 302285245;
unsigned char var_14 = (unsigned char)158;
int zero = 0;
long long int var_15 = 8676719936965503514LL;
unsigned char var_16 = (unsigned char)189;
unsigned long long int var_17 = 802247544721343091ULL;
unsigned short var_18 = (unsigned short)36702;
unsigned long long int var_19 = 5233058307039440909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
