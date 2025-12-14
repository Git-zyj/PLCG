#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1780308752;
unsigned int var_4 = 2544869246U;
signed char var_7 = (signed char)-35;
short var_8 = (short)19627;
short var_15 = (short)-16469;
int zero = 0;
unsigned long long int var_20 = 12217908071371480426ULL;
unsigned int var_21 = 2578491351U;
long long int var_22 = -2559442940715358302LL;
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
