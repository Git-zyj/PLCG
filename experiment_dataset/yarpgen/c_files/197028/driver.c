#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11605;
unsigned int var_6 = 344665699U;
signed char var_7 = (signed char)4;
int var_11 = -1116942912;
long long int var_13 = -8917593323082636326LL;
short var_14 = (short)-23775;
unsigned long long int var_18 = 8305254311032621701ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)18812;
int var_22 = 1055505418;
signed char var_23 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
