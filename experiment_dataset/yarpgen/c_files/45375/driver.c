#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29827;
unsigned short var_6 = (unsigned short)62484;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = 1133204046643498776LL;
short var_16 = (short)21112;
void init() {
}

void checksum() {
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
