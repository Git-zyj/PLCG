#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)30709;
unsigned char var_7 = (unsigned char)205;
unsigned char var_8 = (unsigned char)82;
unsigned long long int var_9 = 7021656722424659436ULL;
_Bool var_13 = (_Bool)0;
long long int var_15 = 1724264869375177625LL;
unsigned int var_16 = 1074656983U;
int zero = 0;
short var_17 = (short)13584;
int var_18 = 7544584;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
