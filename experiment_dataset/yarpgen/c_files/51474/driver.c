#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1154851340;
long long int var_2 = 3874226039429981717LL;
unsigned long long int var_3 = 6945354177724354076ULL;
unsigned int var_14 = 3456340064U;
int zero = 0;
unsigned int var_15 = 3382146687U;
unsigned long long int var_16 = 10003940617684504340ULL;
void init() {
}

void checksum() {
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
