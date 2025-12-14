#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3533382340U;
unsigned long long int var_4 = 7413214172753044602ULL;
short var_6 = (short)-18758;
unsigned long long int var_9 = 8871468172431718580ULL;
int var_11 = 1273404878;
unsigned long long int var_12 = 8338741209122661212ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)27982;
int zero = 0;
signed char var_18 = (signed char)68;
unsigned long long int var_19 = 12880401750456142527ULL;
short var_20 = (short)-8041;
int var_21 = -720532947;
unsigned short var_22 = (unsigned short)48454;
void init() {
}

void checksum() {
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
