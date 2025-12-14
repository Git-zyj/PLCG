#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
long long int var_5 = 3526220689562254593LL;
unsigned int var_9 = 1555001891U;
unsigned int var_11 = 513155486U;
long long int var_12 = -5527110996114568887LL;
int zero = 0;
unsigned long long int var_15 = 16696479410379138636ULL;
int var_16 = -859919251;
short var_17 = (short)-15849;
void init() {
}

void checksum() {
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
