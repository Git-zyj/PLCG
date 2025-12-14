#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1997302563;
unsigned char var_10 = (unsigned char)73;
long long int var_16 = -8399454315259109173LL;
int zero = 0;
unsigned int var_18 = 1257079519U;
short var_19 = (short)-13905;
long long int var_20 = 6541449768991653304LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
