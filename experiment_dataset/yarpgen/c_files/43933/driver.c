#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = -859873520;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-97;
unsigned short var_11 = (unsigned short)30523;
unsigned long long int var_12 = 9975418203146117558ULL;
int var_14 = -1452381377;
int var_15 = 1756296280;
int zero = 0;
int var_17 = 2016542920;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
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
