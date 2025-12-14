#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1822227296;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2118586396U;
unsigned int var_9 = 2510603876U;
int var_11 = 253658706;
unsigned long long int var_12 = 17547642660330345907ULL;
unsigned int var_13 = 2424016414U;
unsigned int var_15 = 3360348316U;
int zero = 0;
unsigned long long int var_19 = 1056835376364987035ULL;
int var_20 = 907182748;
short var_21 = (short)13220;
int var_22 = 1888969805;
void init() {
}

void checksum() {
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
