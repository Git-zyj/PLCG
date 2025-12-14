#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-2861;
int var_4 = -1790240406;
_Bool var_5 = (_Bool)1;
long long int var_6 = -5756781043583482691LL;
unsigned short var_9 = (unsigned short)84;
unsigned short var_11 = (unsigned short)670;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_16 = -1773355760;
unsigned short var_17 = (unsigned short)12807;
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
