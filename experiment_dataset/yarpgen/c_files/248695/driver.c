#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1559560217;
signed char var_4 = (signed char)-5;
int var_7 = -1867898824;
unsigned int var_11 = 3558720470U;
int var_13 = 567472646;
int zero = 0;
int var_18 = -2042097729;
signed char var_19 = (signed char)-81;
void init() {
}

void checksum() {
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
