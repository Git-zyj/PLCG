#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 3395906137410499673ULL;
long long int var_15 = 7236757358383079529LL;
unsigned long long int var_16 = 5316245737884708355ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)37813;
long long int var_19 = -1633541658156527069LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
