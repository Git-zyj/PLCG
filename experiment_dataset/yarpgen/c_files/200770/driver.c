#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2389176480079921913LL;
long long int var_6 = 7053917576857350961LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_18 = -2577259564462865167LL;
unsigned long long int var_19 = 11639221526495444901ULL;
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
