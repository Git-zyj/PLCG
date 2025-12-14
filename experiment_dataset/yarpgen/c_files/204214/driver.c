#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28830;
int var_1 = -951094454;
unsigned short var_3 = (unsigned short)1674;
int zero = 0;
unsigned short var_16 = (unsigned short)39364;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-99;
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
