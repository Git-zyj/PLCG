#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -3778258717529066025LL;
unsigned long long int var_3 = 10301098972800471874ULL;
unsigned int var_5 = 3028004159U;
short var_10 = (short)7748;
unsigned char var_13 = (unsigned char)141;
long long int var_14 = 4255919279275583688LL;
int zero = 0;
short var_15 = (short)20770;
unsigned long long int var_16 = 10174669557142663979ULL;
unsigned short var_17 = (unsigned short)48013;
long long int var_18 = -7101923336914535022LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
