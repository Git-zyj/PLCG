#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 6130423244881379778ULL;
int var_7 = 329283412;
unsigned short var_8 = (unsigned short)61080;
int var_9 = -2121538066;
unsigned int var_11 = 4170122830U;
int var_12 = 1504683858;
unsigned int var_16 = 2825478255U;
int var_17 = -766329626;
short var_19 = (short)28701;
int zero = 0;
signed char var_20 = (signed char)100;
unsigned int var_21 = 1594134427U;
unsigned int var_22 = 2297999810U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
