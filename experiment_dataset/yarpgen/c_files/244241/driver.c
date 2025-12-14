#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 46754183589775272LL;
long long int var_5 = -2303106902317522873LL;
long long int var_7 = -4865938334886537752LL;
signed char var_9 = (signed char)-50;
short var_11 = (short)-9731;
signed char var_14 = (signed char)41;
int var_15 = 1640771474;
short var_16 = (short)2127;
int zero = 0;
long long int var_17 = 4535853539009545180LL;
signed char var_18 = (signed char)10;
int var_19 = 1587531431;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
