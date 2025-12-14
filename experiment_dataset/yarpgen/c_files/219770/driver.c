#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -371401301796385781LL;
unsigned short var_2 = (unsigned short)2831;
signed char var_5 = (signed char)76;
unsigned char var_6 = (unsigned char)134;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)40450;
int zero = 0;
short var_14 = (short)-26479;
short var_15 = (short)6961;
long long int var_16 = -7537911804382488688LL;
int var_17 = 1272028256;
unsigned short var_18 = (unsigned short)13258;
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
