#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3768959026U;
unsigned long long int var_3 = 9589203600593089616ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 1322384258;
int var_6 = 1621113598;
unsigned int var_7 = 2569615137U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 7921216455811770449ULL;
unsigned int var_12 = 2877548114U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4468953076003691608ULL;
int var_15 = -1562838813;
int zero = 0;
long long int var_17 = -5377298574978739525LL;
_Bool var_18 = (_Bool)1;
int var_19 = 636719093;
void init() {
}

void checksum() {
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
