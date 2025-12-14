#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)28628;
signed char var_8 = (signed char)-7;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-21028;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 4416382712292202161ULL;
int zero = 0;
int var_17 = 1116831036;
short var_18 = (short)25991;
unsigned char var_19 = (unsigned char)213;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
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
