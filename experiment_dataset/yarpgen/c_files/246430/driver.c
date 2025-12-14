#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1159682100853955884ULL;
unsigned short var_7 = (unsigned short)56663;
long long int var_10 = -8732926989745402711LL;
unsigned long long int var_11 = 828442299460171141ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 607420091;
void init() {
}

void checksum() {
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
