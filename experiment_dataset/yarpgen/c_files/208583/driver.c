#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)83;
int var_3 = -777152944;
unsigned int var_5 = 3879783569U;
unsigned int var_8 = 100979304U;
_Bool var_9 = (_Bool)0;
long long int var_10 = 145983909468920425LL;
int var_11 = 980876747;
int zero = 0;
unsigned int var_14 = 602985233U;
unsigned int var_15 = 2867815969U;
unsigned char var_16 = (unsigned char)141;
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
