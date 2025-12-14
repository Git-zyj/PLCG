#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
unsigned int var_2 = 3730212133U;
unsigned int var_3 = 2824551901U;
int var_12 = -2078950199;
unsigned int var_13 = 3953679582U;
int zero = 0;
unsigned int var_15 = 3130383584U;
unsigned int var_16 = 1233966528U;
long long int var_17 = -5454610593940471814LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
