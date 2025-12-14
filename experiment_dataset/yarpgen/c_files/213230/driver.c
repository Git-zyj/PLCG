#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4268930457361122394ULL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)2557;
long long int var_10 = 6943708109133396385LL;
long long int var_12 = -6434499498753946005LL;
int zero = 0;
unsigned char var_13 = (unsigned char)249;
unsigned short var_14 = (unsigned short)30638;
void init() {
}

void checksum() {
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
