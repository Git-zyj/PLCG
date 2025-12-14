#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4019652714666388563LL;
unsigned int var_1 = 2434019418U;
unsigned int var_4 = 2056528571U;
unsigned long long int var_6 = 7686327080869726131ULL;
signed char var_8 = (signed char)127;
signed char var_9 = (signed char)36;
int var_10 = -1085358632;
signed char var_12 = (signed char)8;
long long int var_14 = -5926475270298714755LL;
int var_16 = 1762286116;
unsigned int var_17 = 1863029922U;
int zero = 0;
short var_18 = (short)30935;
short var_19 = (short)30811;
signed char var_20 = (signed char)123;
short var_21 = (short)24677;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
