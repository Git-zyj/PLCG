#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-123;
_Bool var_7 = (_Bool)0;
int var_11 = -1095376609;
long long int var_12 = -1383265708431392702LL;
int zero = 0;
int var_14 = -520821615;
unsigned int var_15 = 2815515132U;
void init() {
}

void checksum() {
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
