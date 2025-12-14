#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2397356910680895123LL;
_Bool var_10 = (_Bool)1;
int var_11 = 1186000000;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)62890;
unsigned char var_15 = (unsigned char)173;
int zero = 0;
unsigned short var_16 = (unsigned short)64624;
signed char var_17 = (signed char)86;
void init() {
}

void checksum() {
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
