#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13079;
int var_3 = -1138542826;
unsigned short var_14 = (unsigned short)23195;
long long int var_17 = -7155794012611442917LL;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
_Bool var_21 = (_Bool)1;
short var_22 = (short)16872;
unsigned long long int var_23 = 1841893020018956992ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
