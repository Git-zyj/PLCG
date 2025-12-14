#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_7 = 9332048325806189433ULL;
int var_8 = -792258732;
long long int var_9 = 8945869676049981422LL;
unsigned short var_11 = (unsigned short)65003;
int zero = 0;
unsigned short var_12 = (unsigned short)48719;
unsigned long long int var_13 = 5881937687101489984ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
