#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-106;
unsigned int var_3 = 3090962427U;
short var_9 = (short)-21634;
short var_10 = (short)-7067;
unsigned short var_11 = (unsigned short)38645;
signed char var_12 = (signed char)-53;
int zero = 0;
signed char var_13 = (signed char)69;
unsigned int var_14 = 2081716844U;
unsigned short var_15 = (unsigned short)32830;
unsigned int var_16 = 3025414641U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
