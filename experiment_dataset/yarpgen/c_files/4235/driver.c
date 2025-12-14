#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
short var_7 = (short)-11632;
unsigned short var_10 = (unsigned short)61098;
unsigned short var_11 = (unsigned short)34750;
unsigned int var_12 = 1102696230U;
unsigned short var_13 = (unsigned short)46733;
signed char var_14 = (signed char)112;
int zero = 0;
unsigned int var_16 = 1467877763U;
signed char var_17 = (signed char)46;
signed char var_18 = (signed char)-20;
unsigned int var_19 = 2892761298U;
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
