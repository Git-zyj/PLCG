#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)109;
unsigned int var_5 = 680741729U;
int var_7 = -1389507420;
unsigned int var_8 = 1507299040U;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)26717;
int zero = 0;
int var_14 = -1627670584;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
