#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)51416;
signed char var_6 = (signed char)47;
unsigned short var_8 = (unsigned short)63845;
int var_9 = -86555837;
int zero = 0;
long long int var_10 = -4109586784538388543LL;
unsigned int var_11 = 2850889900U;
short var_12 = (short)24549;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
