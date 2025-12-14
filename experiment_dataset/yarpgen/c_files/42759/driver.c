#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48532;
long long int var_4 = -6600190165972154447LL;
int zero = 0;
long long int var_13 = 7601039263396289513LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3849743620U;
unsigned long long int var_16 = 14292302699225350838ULL;
unsigned int var_17 = 3226037660U;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
