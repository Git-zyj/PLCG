#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
int var_1 = -271769641;
short var_2 = (short)-24203;
short var_7 = (short)4395;
short var_10 = (short)-31595;
signed char var_12 = (signed char)-80;
int zero = 0;
signed char var_18 = (signed char)21;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1874683960U;
long long int var_21 = -1550657570454479386LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
