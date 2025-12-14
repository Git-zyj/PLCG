#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29220;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-13859;
short var_4 = (short)5562;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-9480;
short var_9 = (short)7382;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
short var_15 = (short)-9682;
short var_16 = (short)-24159;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-4438;
short var_19 = (short)-20776;
_Bool var_20 = (_Bool)0;
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
