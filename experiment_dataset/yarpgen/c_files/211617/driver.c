#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1399445045287950317LL;
unsigned int var_2 = 3666918452U;
long long int var_4 = -3222253569741547819LL;
long long int var_5 = -3760737328435794344LL;
signed char var_6 = (signed char)10;
int var_7 = -475634114;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-15954;
int var_10 = 338267921;
int zero = 0;
unsigned int var_12 = 4175701909U;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8661689922852820443LL;
signed char var_15 = (signed char)124;
long long int var_16 = -9149704223990103456LL;
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
