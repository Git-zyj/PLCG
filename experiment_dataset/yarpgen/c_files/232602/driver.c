#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-22;
short var_7 = (short)-17691;
unsigned long long int var_8 = 9279880257462767327ULL;
int var_11 = 1426881047;
int zero = 0;
signed char var_17 = (signed char)-24;
int var_18 = 2123921097;
int var_19 = -332810412;
short var_20 = (short)-31054;
int var_21 = 1529741623;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
