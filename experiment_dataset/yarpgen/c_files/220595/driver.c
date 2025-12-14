#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1397831570;
unsigned char var_3 = (unsigned char)27;
unsigned short var_4 = (unsigned short)17685;
unsigned int var_5 = 1373495049U;
int var_9 = -1677261657;
long long int var_12 = 2286945920643284425LL;
short var_14 = (short)29654;
int zero = 0;
unsigned int var_16 = 3695723162U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)51241;
void init() {
}

void checksum() {
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
