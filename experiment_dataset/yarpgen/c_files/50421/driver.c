#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29222;
short var_6 = (short)-26210;
_Bool var_7 = (_Bool)0;
int var_8 = -1677492615;
signed char var_11 = (signed char)-72;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)37056;
unsigned int var_16 = 174533966U;
unsigned long long int var_17 = 13087188565044706695ULL;
long long int var_18 = -8627076519183965754LL;
void init() {
}

void checksum() {
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
