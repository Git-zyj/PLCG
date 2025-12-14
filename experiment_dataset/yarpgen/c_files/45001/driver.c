#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 18345595625697067079ULL;
short var_5 = (short)-9155;
unsigned int var_9 = 1464103606U;
int zero = 0;
short var_10 = (short)1117;
short var_11 = (short)15864;
signed char var_12 = (signed char)18;
unsigned long long int var_13 = 903806830781091909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
