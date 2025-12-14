#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -6003873830263930285LL;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 561129264878980490ULL;
unsigned short var_12 = (unsigned short)1700;
int zero = 0;
unsigned short var_14 = (unsigned short)16536;
short var_15 = (short)22954;
unsigned long long int var_16 = 12465877093662654438ULL;
unsigned long long int var_17 = 13262723267214135130ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
