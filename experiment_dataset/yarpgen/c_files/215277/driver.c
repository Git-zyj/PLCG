#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)51296;
unsigned int var_6 = 2284897861U;
unsigned short var_8 = (unsigned short)51058;
_Bool var_10 = (_Bool)0;
short var_11 = (short)20794;
short var_14 = (short)28246;
int zero = 0;
unsigned int var_15 = 874108776U;
unsigned char var_16 = (unsigned char)222;
int var_17 = -1583711404;
void init() {
}

void checksum() {
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
