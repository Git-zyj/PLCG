#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)4850;
unsigned short var_8 = (unsigned short)40413;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-22584;
int var_12 = -1435982243;
unsigned int var_13 = 1641627995U;
unsigned short var_14 = (unsigned short)44956;
short var_15 = (short)27331;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
