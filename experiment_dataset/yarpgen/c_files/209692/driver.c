#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1591452679U;
unsigned short var_2 = (unsigned short)20192;
signed char var_3 = (signed char)48;
int var_10 = 1491448085;
unsigned int var_12 = 1416126942U;
unsigned char var_14 = (unsigned char)194;
unsigned int var_16 = 3337944178U;
int var_18 = -667502942;
int zero = 0;
unsigned int var_20 = 2199805934U;
long long int var_21 = -4280563992098270499LL;
long long int var_22 = 3135901480871261422LL;
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
