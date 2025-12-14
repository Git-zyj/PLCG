#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
long long int var_1 = 8571845002512184032LL;
unsigned int var_5 = 403097640U;
long long int var_7 = -8806411543623034186LL;
unsigned short var_12 = (unsigned short)11017;
short var_14 = (short)19628;
int zero = 0;
unsigned long long int var_17 = 11417118330571219848ULL;
unsigned short var_18 = (unsigned short)14759;
void init() {
}

void checksum() {
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
