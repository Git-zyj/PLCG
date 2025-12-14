#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25696;
unsigned short var_1 = (unsigned short)17173;
unsigned long long int var_4 = 12388577486548447451ULL;
long long int var_9 = -8316995636044670139LL;
short var_10 = (short)-19344;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 1785058140120931734ULL;
signed char var_14 = (signed char)102;
long long int var_15 = 7289151147119057538LL;
int zero = 0;
unsigned long long int var_17 = 17596383151005697217ULL;
int var_18 = 627336286;
unsigned char var_19 = (unsigned char)199;
short var_20 = (short)-13607;
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
