#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22361;
long long int var_4 = -441006512031647778LL;
short var_7 = (short)31558;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-11772;
unsigned int var_13 = 554737019U;
int zero = 0;
long long int var_14 = -1584970795421109743LL;
unsigned short var_15 = (unsigned short)15377;
void init() {
}

void checksum() {
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
