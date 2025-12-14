#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_10 = 6272054649762120319LL;
long long int var_11 = -1191361635602513239LL;
long long int var_14 = 2846408774807599996LL;
long long int var_15 = 2468586433529216730LL;
int zero = 0;
unsigned long long int var_17 = 14931296792348710490ULL;
unsigned long long int var_18 = 4878902588937725013ULL;
signed char var_19 = (signed char)(-127 - 1);
unsigned int var_20 = 1414998168U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
