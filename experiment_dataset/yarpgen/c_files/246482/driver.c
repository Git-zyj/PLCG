#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1732825008;
unsigned long long int var_5 = 2625584082052630037ULL;
int zero = 0;
long long int var_12 = 7740317433939134388LL;
long long int var_13 = 3918727227029683594LL;
int var_14 = 825301898;
unsigned int var_15 = 3351100861U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
