#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned int var_1 = 197893083U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
long long int var_4 = -22322925061857956LL;
signed char var_5 = (signed char)-3;
unsigned int var_7 = 317921493U;
int var_8 = -1382503541;
int var_14 = 945836787;
int var_15 = 743995404;
int zero = 0;
unsigned short var_18 = (unsigned short)7511;
long long int var_19 = 6756774944227422979LL;
int var_20 = 1374123142;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
