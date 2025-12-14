#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6096194258501885147LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -864394900239739LL;
int zero = 0;
short var_11 = (short)18021;
short var_12 = (short)-30989;
signed char var_13 = (signed char)56;
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
