#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)165;
int var_6 = -1406127612;
unsigned long long int var_7 = 17135977810330005658ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)49;
signed char var_11 = (signed char)116;
short var_12 = (short)20022;
short var_13 = (short)-4273;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 15939556872501722928ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 880033242U;
int var_19 = 832307280;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
