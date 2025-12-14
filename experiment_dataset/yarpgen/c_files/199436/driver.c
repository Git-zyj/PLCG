#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1417973042U;
unsigned int var_2 = 640928983U;
int var_4 = -1643720302;
int var_6 = 776930833;
int var_7 = -91091331;
unsigned int var_10 = 633332827U;
int zero = 0;
int var_13 = -893619305;
int var_14 = -1885881912;
int var_15 = 2019802477;
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
