#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3745120926U;
unsigned int var_17 = 277112867U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 953671642624726938ULL;
unsigned long long int var_21 = 3118744397890257535ULL;
unsigned long long int var_22 = 12006311983584596800ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
