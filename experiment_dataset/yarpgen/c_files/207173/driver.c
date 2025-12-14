#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 783962058U;
unsigned long long int var_1 = 8906298654080795108ULL;
signed char var_2 = (signed char)63;
unsigned long long int var_3 = 2872759752152891941ULL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)12032;
signed char var_7 = (signed char)39;
unsigned char var_8 = (unsigned char)43;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1845326157U;
short var_12 = (short)-17393;
long long int var_13 = -2751972593919143180LL;
int var_14 = 1378647064;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
