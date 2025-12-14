#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4027209473U;
long long int var_7 = 6001792966175332069LL;
unsigned short var_8 = (unsigned short)55077;
_Bool var_10 = (_Bool)1;
unsigned int var_16 = 2587461744U;
unsigned long long int var_19 = 10761688553547621850ULL;
int zero = 0;
unsigned int var_20 = 905723245U;
short var_21 = (short)29023;
void init() {
}

void checksum() {
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
