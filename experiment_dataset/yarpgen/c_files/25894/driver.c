#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3857304559U;
unsigned char var_7 = (unsigned char)222;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 1734318927U;
int zero = 0;
unsigned long long int var_17 = 4176520513469840320ULL;
int var_18 = -732882935;
short var_19 = (short)-13692;
short var_20 = (short)-4549;
unsigned int var_21 = 3326273613U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
