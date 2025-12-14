#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)45;
short var_10 = (short)-23154;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)-3;
short var_15 = (short)-25747;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)119;
signed char var_19 = (signed char)91;
unsigned long long int var_20 = 7096955935171209905ULL;
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
