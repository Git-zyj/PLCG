#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
short var_2 = (short)-27064;
unsigned int var_3 = 391822704U;
unsigned int var_4 = 760240057U;
unsigned int var_6 = 3169539536U;
short var_9 = (short)19929;
unsigned short var_10 = (unsigned short)34830;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2459548551U;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5764782583555567270LL;
short var_17 = (short)-20886;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
