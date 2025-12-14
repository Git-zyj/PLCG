#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9717;
short var_4 = (short)28906;
unsigned short var_7 = (unsigned short)31998;
int var_9 = 171901024;
int var_10 = 194711462;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -2714294071052118688LL;
int var_14 = -72745941;
void init() {
}

void checksum() {
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
