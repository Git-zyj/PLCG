#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -441436080;
int var_9 = 1575554479;
int var_12 = -1194131351;
int var_14 = 354916954;
int var_15 = -5596792;
int zero = 0;
int var_19 = -185858800;
int var_20 = 2031450073;
void init() {
}

void checksum() {
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
