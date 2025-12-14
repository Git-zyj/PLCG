#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_7 = (unsigned short)9753;
short var_9 = (short)-18404;
short var_12 = (short)-32125;
int zero = 0;
long long int var_14 = -4696418993411262741LL;
unsigned short var_15 = (unsigned short)28085;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
