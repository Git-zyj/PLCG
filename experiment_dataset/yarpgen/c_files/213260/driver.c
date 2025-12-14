#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_7 = 735645343U;
unsigned char var_10 = (unsigned char)164;
int zero = 0;
int var_15 = 498123463;
unsigned long long int var_16 = 14470598771614223321ULL;
unsigned int var_17 = 1294102720U;
int var_18 = -214990515;
unsigned long long int var_19 = 8301225074957055863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
