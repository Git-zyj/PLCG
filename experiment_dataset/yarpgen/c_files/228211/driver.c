#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)62;
long long int var_3 = 8914623401691322009LL;
short var_6 = (short)21771;
unsigned int var_10 = 3241822124U;
unsigned short var_11 = (unsigned short)2972;
unsigned int var_12 = 854037962U;
unsigned short var_13 = (unsigned short)43224;
int zero = 0;
unsigned int var_15 = 2678608869U;
long long int var_16 = 3077034919178169049LL;
int var_17 = -2075990042;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
