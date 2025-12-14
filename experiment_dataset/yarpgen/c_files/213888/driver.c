#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -192647267;
int var_1 = 372171824;
short var_3 = (short)-26898;
unsigned long long int var_5 = 9519252976281378695ULL;
short var_6 = (short)27577;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3700139576628161410ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)56;
int var_14 = 1090807424;
void init() {
}

void checksum() {
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
