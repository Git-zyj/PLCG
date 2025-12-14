#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 17352468170046151471ULL;
unsigned short var_3 = (unsigned short)44689;
unsigned char var_7 = (unsigned char)231;
unsigned long long int var_8 = 3832189173455666633ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)60625;
short var_15 = (short)5514;
long long int var_16 = 1391565946628939658LL;
short var_17 = (short)13315;
unsigned long long int var_18 = 10934856867797007589ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
