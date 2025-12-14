#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 13758466953364813817ULL;
unsigned long long int var_2 = 1387737801714209001ULL;
short var_3 = (short)14931;
int var_4 = 705356229;
signed char var_6 = (signed char)68;
short var_7 = (short)-15427;
unsigned short var_9 = (unsigned short)47573;
int zero = 0;
short var_10 = (short)10833;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)69;
long long int var_14 = 8444962061797081612LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
