#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1209330013;
unsigned int var_4 = 2821880607U;
unsigned char var_5 = (unsigned char)30;
unsigned int var_7 = 1995674641U;
unsigned char var_9 = (unsigned char)114;
unsigned char var_11 = (unsigned char)212;
short var_12 = (short)6831;
signed char var_13 = (signed char)-51;
unsigned char var_15 = (unsigned char)171;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)10429;
signed char var_18 = (signed char)45;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
