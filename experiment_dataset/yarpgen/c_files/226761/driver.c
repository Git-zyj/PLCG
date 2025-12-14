#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
int var_3 = -529825561;
short var_4 = (short)22681;
signed char var_5 = (signed char)(-127 - 1);
_Bool var_7 = (_Bool)1;
int var_9 = 2089572609;
short var_10 = (short)-23221;
int zero = 0;
short var_12 = (short)-16572;
signed char var_13 = (signed char)109;
signed char var_14 = (signed char)90;
short var_15 = (short)13097;
signed char var_16 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
