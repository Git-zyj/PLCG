#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2291132791U;
int var_3 = -624220963;
int var_5 = 1528155462;
int var_7 = 1591619275;
int var_11 = -1060435884;
unsigned int var_15 = 1599584070U;
int zero = 0;
unsigned int var_17 = 3854484297U;
unsigned int var_18 = 1752227132U;
int var_19 = -950113246;
unsigned int var_20 = 538407683U;
unsigned int var_21 = 519572433U;
int var_22 = 1260760274;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
