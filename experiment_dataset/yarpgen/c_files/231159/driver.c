#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
unsigned long long int var_1 = 13707219141763043163ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 8915553012091248217ULL;
long long int var_6 = -1265199812999773166LL;
signed char var_7 = (signed char)-127;
int var_9 = 2107824482;
unsigned int var_10 = 677309539U;
int zero = 0;
unsigned int var_11 = 559026927U;
unsigned short var_12 = (unsigned short)6056;
signed char var_13 = (signed char)-98;
unsigned long long int var_14 = 11360145334475760648ULL;
unsigned int var_15 = 1653235844U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
