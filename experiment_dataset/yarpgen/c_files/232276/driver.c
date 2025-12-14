#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4201071039U;
unsigned int var_1 = 424390721U;
signed char var_2 = (signed char)-33;
unsigned short var_3 = (unsigned short)49500;
short var_4 = (short)15237;
signed char var_6 = (signed char)-4;
unsigned long long int var_7 = 5338868255936018413ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-5247;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-16852;
unsigned long long int var_17 = 7572489375525946554ULL;
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
