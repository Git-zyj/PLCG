#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1705880428;
unsigned int var_5 = 3977322162U;
unsigned int var_6 = 2305590262U;
int var_8 = 1003281653;
short var_12 = (short)21787;
int zero = 0;
unsigned long long int var_18 = 15876310451016523526ULL;
long long int var_19 = -2093449998789872590LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
