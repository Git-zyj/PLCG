#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37222;
_Bool var_4 = (_Bool)1;
unsigned int var_11 = 1799256691U;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = 1860190178;
long long int var_16 = 3388383990060072904LL;
unsigned long long int var_17 = 12877343479783496937ULL;
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
