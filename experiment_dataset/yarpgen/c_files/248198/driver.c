#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
short var_3 = (short)17631;
long long int var_5 = -3998958844716183810LL;
short var_6 = (short)4563;
short var_10 = (short)-20141;
short var_11 = (short)-15249;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-12;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)29;
long long int var_16 = -2942605258721036160LL;
signed char var_17 = (signed char)-14;
short var_18 = (short)-1473;
signed char var_19 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
