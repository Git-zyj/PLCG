#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37634;
int var_2 = 715628197;
long long int var_3 = 30289469876303049LL;
long long int var_6 = -6017334780400205485LL;
long long int var_8 = 3608565885963868324LL;
signed char var_9 = (signed char)52;
int zero = 0;
long long int var_12 = -4164551577037389071LL;
unsigned short var_13 = (unsigned short)56123;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1624203883U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
