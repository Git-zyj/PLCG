#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned short var_4 = (unsigned short)53822;
short var_9 = (short)-20402;
unsigned int var_12 = 2361378784U;
unsigned short var_13 = (unsigned short)40940;
int zero = 0;
signed char var_16 = (signed char)39;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 744172518U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
