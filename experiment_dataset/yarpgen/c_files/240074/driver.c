#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -46916768;
unsigned int var_4 = 46951674U;
short var_6 = (short)-9544;
unsigned int var_13 = 589489768U;
long long int var_14 = -8035158623800154747LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -211224762;
short var_19 = (short)15674;
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
