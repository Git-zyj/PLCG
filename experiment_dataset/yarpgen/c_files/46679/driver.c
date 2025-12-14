#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7693935258586948960LL;
unsigned long long int var_4 = 12458981553850136969ULL;
unsigned long long int var_5 = 12471194807318771491ULL;
unsigned int var_7 = 3329272113U;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 4221349112U;
int zero = 0;
unsigned char var_14 = (unsigned char)85;
int var_15 = -1445117404;
unsigned short var_16 = (unsigned short)62148;
unsigned short var_17 = (unsigned short)22592;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
