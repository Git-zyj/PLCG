#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)42;
signed char var_8 = (signed char)-118;
short var_11 = (short)-6425;
unsigned long long int var_12 = 1433288306672008521ULL;
signed char var_13 = (signed char)32;
unsigned long long int var_14 = 370415713647253428ULL;
unsigned long long int var_15 = 15899805168028970208ULL;
int zero = 0;
short var_16 = (short)10357;
unsigned long long int var_17 = 2380407932299029353ULL;
long long int var_18 = 4350086115564722849LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
