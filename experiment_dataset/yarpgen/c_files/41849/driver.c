#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35716;
int var_2 = -546211018;
short var_5 = (short)-12508;
int var_10 = -972715444;
unsigned long long int var_11 = 6379217869489759069ULL;
unsigned long long int var_14 = 5031751201136226109ULL;
signed char var_15 = (signed char)-118;
short var_16 = (short)-30984;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1915250446U;
long long int var_21 = 7031522923469210815LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
