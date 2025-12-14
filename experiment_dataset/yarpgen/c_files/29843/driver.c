#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 688635611U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 14819511388065051314ULL;
long long int var_11 = -3092826564263203845LL;
short var_14 = (short)21423;
unsigned int var_16 = 624903455U;
int zero = 0;
long long int var_20 = -7677178202572065711LL;
int var_21 = -1029322320;
short var_22 = (short)-4772;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
