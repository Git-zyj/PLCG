#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -760706445895383630LL;
unsigned char var_5 = (unsigned char)141;
unsigned short var_12 = (unsigned short)46753;
unsigned short var_13 = (unsigned short)24307;
unsigned short var_14 = (unsigned short)18766;
int zero = 0;
long long int var_17 = 1723534137749793892LL;
int var_18 = 2079796861;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3928452813053355606LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
