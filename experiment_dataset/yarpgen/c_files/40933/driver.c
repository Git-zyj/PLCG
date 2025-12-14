#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -3396924150111185782LL;
unsigned short var_5 = (unsigned short)40275;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1906702035U;
signed char var_9 = (signed char)-9;
long long int var_10 = -2341986327647950458LL;
short var_11 = (short)-24644;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2431411010U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
