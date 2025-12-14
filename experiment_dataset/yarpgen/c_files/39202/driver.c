#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
signed char var_7 = (signed char)-96;
signed char var_8 = (signed char)62;
long long int var_12 = -976525579423274170LL;
unsigned long long int var_15 = 14273086513573503676ULL;
int zero = 0;
short var_19 = (short)25850;
short var_20 = (short)-7236;
long long int var_21 = 4932103936590863944LL;
signed char var_22 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
