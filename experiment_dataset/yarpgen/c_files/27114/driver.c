#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10412972838979223617ULL;
short var_2 = (short)12844;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_12 = -3409643248501776410LL;
unsigned long long int var_13 = 15470343492639976371ULL;
int zero = 0;
long long int var_18 = 695843949021674758LL;
short var_19 = (short)110;
void init() {
}

void checksum() {
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
