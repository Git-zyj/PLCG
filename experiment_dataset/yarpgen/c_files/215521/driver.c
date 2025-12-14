#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -514343195;
long long int var_3 = -6533527850079724744LL;
unsigned char var_4 = (unsigned char)100;
int var_7 = -1846460471;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)32611;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4921784804505079664LL;
unsigned short var_18 = (unsigned short)65128;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
