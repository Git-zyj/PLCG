#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = -8135641505964599806LL;
short var_17 = (short)-31444;
long long int var_18 = -1330909809025691838LL;
int zero = 0;
long long int var_20 = -3925891995262892094LL;
long long int var_21 = 6308240817309297860LL;
int var_22 = -2064177521;
short var_23 = (short)26070;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
