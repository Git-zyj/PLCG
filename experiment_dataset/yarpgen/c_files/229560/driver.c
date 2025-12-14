#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)97;
int var_3 = 1899287105;
unsigned long long int var_5 = 4233587040055073740ULL;
long long int var_14 = -1121309750003862541LL;
int zero = 0;
int var_17 = -1463041394;
signed char var_18 = (signed char)75;
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
