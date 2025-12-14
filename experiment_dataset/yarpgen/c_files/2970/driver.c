#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2582540036280947314LL;
int var_5 = -1492135504;
short var_6 = (short)-24357;
int var_7 = 401465909;
long long int var_9 = 1654268331998572598LL;
int zero = 0;
long long int var_11 = -3321658532776138757LL;
unsigned int var_12 = 2063741053U;
long long int var_13 = 1807175905626005539LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
