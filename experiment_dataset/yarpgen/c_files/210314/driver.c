#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned long long int var_1 = 767230036179517646ULL;
unsigned int var_2 = 492450052U;
signed char var_10 = (signed char)-80;
unsigned long long int var_11 = 16528387108731311822ULL;
signed char var_13 = (signed char)120;
int zero = 0;
unsigned long long int var_14 = 16683576601645291318ULL;
signed char var_15 = (signed char)-33;
unsigned long long int var_16 = 10741782684738322416ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
