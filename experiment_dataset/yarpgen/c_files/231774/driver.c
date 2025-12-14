#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1305964452;
long long int var_5 = -8487641392970794289LL;
unsigned char var_7 = (unsigned char)33;
short var_9 = (short)-10098;
unsigned short var_11 = (unsigned short)20630;
int zero = 0;
long long int var_20 = 6444155314172393957LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3165539424U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
