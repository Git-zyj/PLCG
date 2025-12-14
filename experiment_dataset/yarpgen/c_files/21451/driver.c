#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1811076400;
int var_3 = 20112643;
short var_8 = (short)-23641;
signed char var_13 = (signed char)-49;
signed char var_15 = (signed char)51;
int zero = 0;
signed char var_16 = (signed char)102;
long long int var_17 = -4211970394083327352LL;
signed char var_18 = (signed char)65;
unsigned int var_19 = 3079324658U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
