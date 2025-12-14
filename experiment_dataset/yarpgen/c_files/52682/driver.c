#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14036;
int var_6 = 963649922;
unsigned int var_10 = 3267757497U;
unsigned long long int var_12 = 17230240467792915791ULL;
unsigned short var_15 = (unsigned short)19364;
int var_16 = -1495285497;
int zero = 0;
unsigned long long int var_20 = 6327093920539809604ULL;
int var_21 = -1054766718;
signed char var_22 = (signed char)61;
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
