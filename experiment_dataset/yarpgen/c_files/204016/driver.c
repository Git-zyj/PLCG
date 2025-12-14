#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
signed char var_7 = (signed char)77;
unsigned int var_10 = 2337048442U;
signed char var_12 = (signed char)-41;
unsigned long long int var_14 = 12793864084195858584ULL;
signed char var_16 = (signed char)9;
int zero = 0;
signed char var_19 = (signed char)-42;
unsigned short var_20 = (unsigned short)42884;
short var_21 = (short)798;
int var_22 = -456108154;
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
