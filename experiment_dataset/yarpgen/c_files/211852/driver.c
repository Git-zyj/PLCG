#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-96;
unsigned long long int var_13 = 1260378278104217483ULL;
unsigned long long int var_14 = 10834959204964888756ULL;
int zero = 0;
int var_18 = -1319434941;
unsigned long long int var_19 = 5693590725910894084ULL;
int var_20 = 596805174;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
