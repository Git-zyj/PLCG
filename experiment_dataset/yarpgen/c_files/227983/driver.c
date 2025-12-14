#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1715487605;
unsigned int var_1 = 1726432211U;
short var_5 = (short)-8586;
int var_6 = 1684625047;
unsigned short var_9 = (unsigned short)58574;
unsigned char var_10 = (unsigned char)137;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6002810433172260925LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
