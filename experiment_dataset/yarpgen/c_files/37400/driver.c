#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13669;
unsigned long long int var_3 = 1096441484067490791ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)43773;
long long int var_12 = -5007606193352290419LL;
int zero = 0;
unsigned int var_14 = 1820772735U;
signed char var_15 = (signed char)-38;
unsigned int var_16 = 2533767332U;
unsigned char var_17 = (unsigned char)208;
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
