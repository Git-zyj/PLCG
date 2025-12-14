#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)92;
unsigned int var_3 = 2548248276U;
long long int var_4 = 1695800952444930505LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)7096;
int var_7 = 2125214332;
signed char var_9 = (signed char)-104;
int var_11 = -1572614408;
signed char var_13 = (signed char)79;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)25;
unsigned int var_20 = 3975820466U;
short var_21 = (short)-6394;
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
