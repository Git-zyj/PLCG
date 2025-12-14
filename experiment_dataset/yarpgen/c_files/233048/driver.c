#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned long long int var_1 = 7953507236723216365ULL;
unsigned int var_2 = 2689499286U;
short var_3 = (short)6519;
signed char var_11 = (signed char)-117;
int zero = 0;
signed char var_12 = (signed char)83;
signed char var_13 = (signed char)92;
unsigned long long int var_14 = 14600559762842825016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
