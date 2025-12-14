#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1768573604U;
long long int var_1 = -481063104007079405LL;
_Bool var_4 = (_Bool)1;
unsigned short var_13 = (unsigned short)31469;
short var_16 = (short)31908;
int zero = 0;
unsigned short var_19 = (unsigned short)9082;
unsigned short var_20 = (unsigned short)21920;
long long int var_21 = -5208271423980778900LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
