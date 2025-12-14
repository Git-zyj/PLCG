#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 561993670068704191LL;
long long int var_5 = 1750478743059320394LL;
int var_7 = -1566207720;
long long int var_8 = 6678349962753148287LL;
unsigned short var_9 = (unsigned short)16487;
int zero = 0;
unsigned int var_12 = 1754331972U;
short var_13 = (short)10311;
void init() {
}

void checksum() {
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
