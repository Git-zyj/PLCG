#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11735111536078499043ULL;
unsigned int var_2 = 1200746827U;
int var_5 = -977086554;
unsigned char var_6 = (unsigned char)107;
short var_7 = (short)-23554;
signed char var_9 = (signed char)-42;
unsigned long long int var_11 = 13744802084398725202ULL;
_Bool var_13 = (_Bool)1;
int var_14 = -1582164828;
int zero = 0;
int var_15 = 233854832;
unsigned char var_16 = (unsigned char)22;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
