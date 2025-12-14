#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
short var_3 = (short)23418;
unsigned long long int var_8 = 3859729677592075564ULL;
long long int var_11 = -2947125378892022359LL;
signed char var_12 = (signed char)-25;
int zero = 0;
unsigned int var_13 = 3794123631U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-26120;
short var_16 = (short)-15880;
long long int var_17 = 8021094317207470843LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
