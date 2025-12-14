#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15285871320321251033ULL;
int var_2 = -1185223652;
unsigned int var_6 = 1085489353U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-50;
unsigned long long int var_12 = 14692954784329535922ULL;
unsigned long long int var_13 = 14238110786494933345ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)2002;
unsigned short var_17 = (unsigned short)36114;
unsigned long long int var_18 = 13731773231533096449ULL;
void init() {
}

void checksum() {
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
