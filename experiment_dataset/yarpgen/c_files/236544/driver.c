#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13421;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)35904;
int var_8 = 677993494;
long long int var_13 = 865189547552609152LL;
int var_19 = -1990068299;
int zero = 0;
unsigned long long int var_20 = 4730196287075236472ULL;
int var_21 = -682699409;
_Bool var_22 = (_Bool)1;
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
