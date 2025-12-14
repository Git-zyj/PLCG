#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)161;
unsigned long long int var_4 = 8355216791070283388ULL;
int var_5 = -1223449431;
unsigned long long int var_10 = 17933236612005365814ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3074636259U;
unsigned char var_15 = (unsigned char)72;
short var_16 = (short)-22489;
signed char var_17 = (signed char)-93;
void init() {
}

void checksum() {
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
