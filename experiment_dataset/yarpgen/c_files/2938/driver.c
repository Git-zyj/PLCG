#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)13877;
short var_6 = (short)31840;
long long int var_7 = 4137548667641402133LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 7828808379354870854ULL;
long long int var_11 = -1129145468283410275LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
