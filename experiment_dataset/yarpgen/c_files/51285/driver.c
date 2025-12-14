#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)37983;
signed char var_7 = (signed char)13;
signed char var_8 = (signed char)118;
long long int var_9 = -5736470403697278900LL;
int var_10 = 1826470237;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -96190415906285325LL;
signed char var_16 = (signed char)-76;
short var_17 = (short)-21409;
signed char var_18 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
