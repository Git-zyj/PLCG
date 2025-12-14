#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11580;
long long int var_6 = 5417828103056998129LL;
unsigned int var_7 = 2229969015U;
short var_10 = (short)26261;
unsigned short var_15 = (unsigned short)19530;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)24283;
unsigned int var_22 = 2569366424U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
