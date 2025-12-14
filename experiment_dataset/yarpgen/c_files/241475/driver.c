#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3958733249919014688LL;
long long int var_2 = -7323139526460128668LL;
unsigned char var_3 = (unsigned char)43;
unsigned int var_4 = 3701996224U;
_Bool var_5 = (_Bool)0;
int zero = 0;
long long int var_12 = 3882627636915601617LL;
unsigned int var_13 = 1655629633U;
short var_14 = (short)11517;
signed char var_15 = (signed char)-55;
signed char var_16 = (signed char)-87;
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
