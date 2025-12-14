#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-126;
unsigned long long int var_5 = 762595223087199610ULL;
signed char var_6 = (signed char)11;
unsigned short var_11 = (unsigned short)2232;
signed char var_12 = (signed char)-23;
int var_13 = 1212780661;
short var_14 = (short)21379;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)82;
short var_21 = (short)32028;
long long int var_22 = 6180369431367913514LL;
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
