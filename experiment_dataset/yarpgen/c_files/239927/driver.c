#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62026;
unsigned long long int var_3 = 10471746771081716318ULL;
signed char var_4 = (signed char)99;
_Bool var_5 = (_Bool)0;
long long int var_6 = -270615213585898760LL;
unsigned int var_7 = 3523264524U;
unsigned short var_9 = (unsigned short)22926;
int zero = 0;
signed char var_10 = (signed char)63;
unsigned short var_11 = (unsigned short)29996;
unsigned short var_12 = (unsigned short)48144;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
