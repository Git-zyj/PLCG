#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-62;
short var_8 = (short)13472;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-25212;
long long int var_14 = 5732418006970728302LL;
short var_15 = (short)-30414;
_Bool var_16 = (_Bool)1;
int var_17 = 89243800;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
