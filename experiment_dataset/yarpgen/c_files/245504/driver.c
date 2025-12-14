#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1053380903591320936LL;
_Bool var_4 = (_Bool)0;
long long int var_7 = -3291869496980591952LL;
int zero = 0;
unsigned int var_12 = 1592863636U;
signed char var_13 = (signed char)-21;
long long int var_14 = -5188649911660455248LL;
void init() {
}

void checksum() {
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
