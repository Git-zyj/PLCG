#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_7 = 2132728967101279158LL;
unsigned char var_11 = (unsigned char)180;
int var_12 = 543056870;
long long int var_13 = -1251500468099674755LL;
int var_14 = -2145986826;
int zero = 0;
unsigned short var_15 = (unsigned short)21838;
int var_16 = 1277164801;
_Bool var_17 = (_Bool)0;
short var_18 = (short)28268;
void init() {
}

void checksum() {
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
