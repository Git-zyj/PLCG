#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
unsigned long long int var_4 = 2127489212710783392ULL;
signed char var_5 = (signed char)-125;
signed char var_6 = (signed char)80;
unsigned int var_7 = 2200598661U;
int var_9 = 887379046;
signed char var_10 = (signed char)114;
int var_16 = -1483063418;
unsigned int var_17 = 170623158U;
int zero = 0;
unsigned int var_18 = 2302418529U;
unsigned int var_19 = 2785945533U;
short var_20 = (short)20959;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
