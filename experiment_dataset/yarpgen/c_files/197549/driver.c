#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1059542384309873484LL;
int var_5 = -1396181342;
unsigned int var_8 = 3526587542U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)6880;
unsigned short var_12 = (unsigned short)5476;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -8805145342846180617LL;
int var_17 = 1859057903;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
