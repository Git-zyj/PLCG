#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1290617031U;
unsigned int var_2 = 67190377U;
unsigned int var_3 = 3805731021U;
int zero = 0;
unsigned long long int var_12 = 4463552334684891274ULL;
unsigned long long int var_13 = 5053141226875928943ULL;
unsigned short var_14 = (unsigned short)20040;
long long int var_15 = -4332557247022085534LL;
long long int var_16 = -3039826400711306233LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
