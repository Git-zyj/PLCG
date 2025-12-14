#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 412716337U;
unsigned short var_7 = (unsigned short)47585;
unsigned long long int var_16 = 15637204195552113592ULL;
int zero = 0;
unsigned int var_18 = 869931641U;
int var_19 = 837710911;
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
