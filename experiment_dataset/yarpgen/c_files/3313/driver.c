#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)64;
unsigned long long int var_2 = 4779615267739623759ULL;
short var_5 = (short)5024;
long long int var_6 = -4788514400352719322LL;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)27059;
unsigned int var_15 = 24424405U;
int zero = 0;
long long int var_16 = -5039173406374682885LL;
short var_17 = (short)31558;
int var_18 = -19423499;
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
