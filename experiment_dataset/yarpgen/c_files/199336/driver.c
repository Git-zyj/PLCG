#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20047;
unsigned char var_2 = (unsigned char)60;
unsigned short var_3 = (unsigned short)44309;
long long int var_6 = 2050016646843710914LL;
unsigned char var_7 = (unsigned char)122;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)244;
short var_11 = (short)-4069;
unsigned int var_12 = 2735471669U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
