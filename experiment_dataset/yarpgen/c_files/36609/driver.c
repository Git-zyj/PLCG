#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26022;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)62400;
int zero = 0;
unsigned char var_14 = (unsigned char)105;
unsigned short var_15 = (unsigned short)42967;
unsigned short var_16 = (unsigned short)25245;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
