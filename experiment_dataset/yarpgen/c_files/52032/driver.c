#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7259009818767126253ULL;
long long int var_5 = 9129813242969558707LL;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)18530;
unsigned char var_15 = (unsigned char)160;
int zero = 0;
long long int var_16 = 4397454360371779728LL;
unsigned short var_17 = (unsigned short)51853;
unsigned long long int var_18 = 12043990205405276666ULL;
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
