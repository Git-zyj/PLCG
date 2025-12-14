#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6909556482581586161LL;
short var_1 = (short)7407;
_Bool var_2 = (_Bool)0;
short var_3 = (short)32050;
long long int var_5 = -6135082987761098582LL;
unsigned long long int var_6 = 10888804041257475778ULL;
long long int var_7 = -2602708983275421827LL;
signed char var_8 = (signed char)105;
unsigned int var_10 = 352944001U;
unsigned short var_12 = (unsigned short)40874;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)78;
signed char var_17 = (signed char)124;
signed char var_18 = (signed char)-5;
long long int var_19 = -7755414017555278944LL;
void init() {
}

void checksum() {
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
