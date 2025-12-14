#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1786757826777587483LL;
unsigned long long int var_2 = 2471034606492299418ULL;
int var_7 = -1338706317;
unsigned int var_8 = 1066064920U;
unsigned short var_11 = (unsigned short)28571;
_Bool var_12 = (_Bool)0;
long long int var_15 = -7649798097612455073LL;
int zero = 0;
unsigned short var_19 = (unsigned short)62242;
long long int var_20 = 3084403158589602965LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
