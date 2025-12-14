#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1788209723U;
unsigned int var_5 = 239365691U;
int var_6 = -90503259;
unsigned short var_10 = (unsigned short)28007;
_Bool var_11 = (_Bool)1;
int var_13 = -1781736539;
int zero = 0;
unsigned int var_19 = 2792744886U;
int var_20 = -1658964945;
short var_21 = (short)-18158;
_Bool var_22 = (_Bool)1;
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
