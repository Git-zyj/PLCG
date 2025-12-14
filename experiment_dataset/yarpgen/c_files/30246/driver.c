#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4739652123901657738ULL;
int var_2 = -418947718;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-3433;
unsigned long long int var_8 = 2153345614123529087ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)48182;
unsigned short var_12 = (unsigned short)47351;
int zero = 0;
int var_14 = 814785766;
short var_15 = (short)6234;
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
