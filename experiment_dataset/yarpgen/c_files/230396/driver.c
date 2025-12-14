#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)14286;
long long int var_9 = 6295352312660722205LL;
unsigned short var_12 = (unsigned short)22209;
unsigned char var_14 = (unsigned char)167;
unsigned int var_15 = 3435058802U;
int var_16 = -2025512831;
unsigned long long int var_19 = 15990096874991044866ULL;
int zero = 0;
unsigned long long int var_20 = 6038635810319609704ULL;
unsigned long long int var_21 = 7724396768054083647ULL;
signed char var_22 = (signed char)-10;
short var_23 = (short)1063;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
