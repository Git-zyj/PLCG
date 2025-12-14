#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4063638292U;
unsigned short var_2 = (unsigned short)53405;
signed char var_6 = (signed char)120;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 707259841U;
unsigned int var_13 = 3776089609U;
int zero = 0;
short var_16 = (short)13183;
short var_17 = (short)13577;
long long int var_18 = 2152088382421406412LL;
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
