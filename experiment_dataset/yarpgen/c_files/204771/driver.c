#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1379671263;
short var_1 = (short)-28854;
short var_3 = (short)19967;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)17;
unsigned char var_15 = (unsigned char)13;
int zero = 0;
long long int var_16 = -8969458136248992659LL;
unsigned int var_17 = 3964901536U;
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
