#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5703;
int var_1 = -2046090489;
short var_3 = (short)22840;
unsigned short var_5 = (unsigned short)58650;
long long int var_7 = 4118142459115798475LL;
short var_8 = (short)-9224;
signed char var_9 = (signed char)102;
int var_10 = -1806304392;
int zero = 0;
long long int var_12 = -7980721937020949714LL;
int var_13 = -855335513;
int var_14 = 2089399169;
unsigned short var_15 = (unsigned short)58943;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
