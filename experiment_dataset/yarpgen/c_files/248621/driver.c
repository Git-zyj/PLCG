#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 919483417U;
int var_9 = 1011820232;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4582590502559438598LL;
int var_12 = 1511693104;
long long int var_13 = -1785868044827046407LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
