#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1103146667;
unsigned long long int var_3 = 15806632030363038772ULL;
signed char var_4 = (signed char)18;
short var_5 = (short)29969;
short var_8 = (short)1635;
signed char var_12 = (signed char)-123;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-23937;
int zero = 0;
long long int var_16 = -2674981053316535385LL;
unsigned int var_17 = 3941683685U;
long long int var_18 = 308922757720144800LL;
void init() {
}

void checksum() {
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
