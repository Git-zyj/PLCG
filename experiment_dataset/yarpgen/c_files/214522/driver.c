#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5008608678924894202LL;
unsigned short var_2 = (unsigned short)48916;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)10769;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = 1550636232;
_Bool var_21 = (_Bool)0;
long long int var_22 = 2634910544594250735LL;
unsigned short var_23 = (unsigned short)37049;
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
