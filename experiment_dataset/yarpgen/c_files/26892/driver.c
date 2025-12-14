#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 610956314U;
int var_5 = 656365965;
int var_7 = -797704553;
unsigned int var_8 = 3003448660U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4199004003U;
_Bool var_13 = (_Bool)0;
int var_14 = 849243669;
int var_15 = -1840906883;
int zero = 0;
int var_16 = -1746475525;
unsigned int var_17 = 4239888411U;
unsigned int var_18 = 3157839636U;
void init() {
}

void checksum() {
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
