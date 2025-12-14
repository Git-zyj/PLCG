#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2081238800;
signed char var_14 = (signed char)-62;
unsigned short var_15 = (unsigned short)20794;
int zero = 0;
signed char var_17 = (signed char)103;
long long int var_18 = 5399610676046354133LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4538658633150797361ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
