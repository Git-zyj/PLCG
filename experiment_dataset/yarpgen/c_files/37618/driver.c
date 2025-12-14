#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4042633830U;
signed char var_2 = (signed char)58;
short var_4 = (short)-26708;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)47346;
short var_10 = (short)-32537;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)173;
unsigned long long int var_15 = 14288702314629130286ULL;
long long int var_16 = -8782887320649992196LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
