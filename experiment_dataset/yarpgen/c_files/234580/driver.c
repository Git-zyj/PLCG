#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4037666786U;
int var_6 = -1782284009;
unsigned int var_9 = 2353586592U;
unsigned short var_12 = (unsigned short)3456;
signed char var_14 = (signed char)-7;
int zero = 0;
signed char var_16 = (signed char)-40;
short var_17 = (short)31671;
unsigned long long int var_18 = 13088340495007115875ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
