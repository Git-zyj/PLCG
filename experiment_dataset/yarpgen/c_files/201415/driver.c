#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -6508054028163569652LL;
signed char var_3 = (signed char)-8;
signed char var_6 = (signed char)116;
long long int var_12 = -1691221073093486300LL;
unsigned long long int var_13 = 5752064261283466035ULL;
long long int var_14 = 7995125001573605244LL;
int zero = 0;
int var_15 = 299630052;
short var_16 = (short)-19931;
long long int var_17 = 519557673488719551LL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 7961305103958459862ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
