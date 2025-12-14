#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2835;
long long int var_10 = 8972488575957545199LL;
long long int var_12 = -4384517247412700514LL;
signed char var_13 = (signed char)92;
signed char var_14 = (signed char)60;
int zero = 0;
long long int var_15 = 1836497776437241854LL;
short var_16 = (short)-31215;
short var_17 = (short)5764;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
