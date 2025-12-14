#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1639802029;
unsigned char var_2 = (unsigned char)31;
unsigned short var_3 = (unsigned short)18464;
int var_6 = -2009053907;
short var_7 = (short)6459;
int var_8 = 1908732903;
unsigned char var_9 = (unsigned char)54;
int zero = 0;
unsigned int var_11 = 3531287949U;
unsigned short var_12 = (unsigned short)20580;
long long int var_13 = 7261272966324549141LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
