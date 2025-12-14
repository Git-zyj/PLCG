#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -2138664476;
unsigned short var_6 = (unsigned short)10582;
long long int var_9 = -1712976968779440348LL;
long long int var_14 = -4839470970165795705LL;
int zero = 0;
unsigned short var_15 = (unsigned short)37631;
unsigned int var_16 = 2442099183U;
long long int var_17 = -3430074935814846276LL;
void init() {
}

void checksum() {
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
