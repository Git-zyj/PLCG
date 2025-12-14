#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 593120934U;
signed char var_7 = (signed char)126;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 12942396869283409532ULL;
int zero = 0;
unsigned int var_12 = 3374249504U;
int var_13 = 1070410232;
unsigned short var_14 = (unsigned short)37357;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
