#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8420865380628731LL;
signed char var_1 = (signed char)-56;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2130916126U;
short var_6 = (short)-1516;
short var_8 = (short)-2706;
long long int var_9 = -4521562463809574218LL;
unsigned int var_10 = 3039949106U;
int zero = 0;
long long int var_11 = 1542321893003461522LL;
int var_12 = -1322690815;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
