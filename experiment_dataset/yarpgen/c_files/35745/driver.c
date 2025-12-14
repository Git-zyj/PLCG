#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 405987506;
unsigned int var_3 = 2569074413U;
int var_7 = -1103488264;
int var_14 = -10457200;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-17;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)53304;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
