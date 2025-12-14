#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2336905021549288280ULL;
unsigned short var_6 = (unsigned short)17292;
signed char var_10 = (signed char)13;
_Bool var_14 = (_Bool)0;
short var_17 = (short)-13787;
unsigned long long int var_18 = 9507252109291493512ULL;
unsigned long long int var_19 = 3820306599845088395ULL;
int zero = 0;
unsigned int var_20 = 520377001U;
unsigned int var_21 = 3409249062U;
int var_22 = 1476654450;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
