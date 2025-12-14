#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29478;
int var_2 = -7177599;
int var_3 = -1287766130;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 525208931028626259ULL;
int var_9 = 1395377324;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)28235;
unsigned short var_14 = (unsigned short)22582;
signed char var_15 = (signed char)59;
unsigned int var_16 = 3256544638U;
unsigned int var_17 = 2567971241U;
short var_18 = (short)15412;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
