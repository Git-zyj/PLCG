#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-21690;
long long int var_7 = -4499530202531098246LL;
unsigned long long int var_8 = 8668789448779570487ULL;
int var_9 = 599543732;
short var_11 = (short)-21163;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1249432571;
unsigned int var_15 = 1165463114U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
