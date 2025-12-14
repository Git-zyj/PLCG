#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34165;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)183;
unsigned long long int var_6 = 15327382021034460085ULL;
int zero = 0;
unsigned long long int var_14 = 126594854006046203ULL;
long long int var_15 = -5623288647649543776LL;
unsigned short var_16 = (unsigned short)33943;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
