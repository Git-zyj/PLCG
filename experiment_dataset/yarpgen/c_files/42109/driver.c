#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -774224092;
unsigned int var_12 = 692711475U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1544280754U;
long long int var_18 = 8587586389192571879LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1849653601U;
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
