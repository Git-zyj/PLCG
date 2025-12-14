#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1115933147;
unsigned int var_6 = 2562517969U;
short var_8 = (short)-9934;
long long int var_10 = -4558599968959110999LL;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)6595;
unsigned int var_15 = 1716231061U;
int zero = 0;
unsigned int var_18 = 2269332274U;
unsigned int var_19 = 1256412352U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)31;
long long int var_22 = -6498115987395182028LL;
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
