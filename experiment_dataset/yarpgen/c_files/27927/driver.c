#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3950059438815563237LL;
long long int var_7 = -8999604144877765928LL;
unsigned short var_8 = (unsigned short)46586;
signed char var_9 = (signed char)125;
int zero = 0;
int var_10 = -1467454889;
unsigned short var_11 = (unsigned short)63464;
unsigned int var_12 = 1730935794U;
unsigned int var_13 = 1004826915U;
long long int var_14 = -3363702143917883501LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
