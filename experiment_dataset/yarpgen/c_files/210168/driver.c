#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2469870817437085474LL;
short var_1 = (short)14454;
int var_6 = -651528315;
short var_10 = (short)25136;
long long int var_11 = 5569076939964152050LL;
signed char var_13 = (signed char)6;
int var_15 = 537786656;
short var_17 = (short)28675;
int zero = 0;
signed char var_18 = (signed char)118;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-14520;
long long int var_21 = -4120381107998119947LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
