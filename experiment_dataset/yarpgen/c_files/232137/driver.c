#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_6 = 1307346643;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1824898463U;
int zero = 0;
unsigned char var_10 = (unsigned char)136;
int var_11 = -1664741454;
int var_12 = 1016386523;
unsigned short var_13 = (unsigned short)53700;
unsigned char var_14 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
