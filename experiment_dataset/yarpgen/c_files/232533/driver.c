#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3681253791480922074LL;
unsigned char var_2 = (unsigned char)137;
long long int var_5 = 4180128650491189965LL;
long long int var_9 = 392378786505508495LL;
long long int var_10 = -4397851271734992018LL;
long long int var_12 = 1086480043395605181LL;
short var_14 = (short)16962;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -6942145894251820163LL;
long long int var_18 = 1704610374037340683LL;
unsigned char var_19 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
