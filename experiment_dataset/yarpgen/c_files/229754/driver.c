#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3953425000U;
long long int var_5 = -2880130478486652067LL;
unsigned long long int var_7 = 3287393142261135719ULL;
unsigned int var_10 = 2583034528U;
int zero = 0;
int var_13 = -698873188;
short var_14 = (short)-11465;
unsigned long long int var_15 = 5675322816793485087ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
